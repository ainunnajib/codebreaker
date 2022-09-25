#include <iostream>
#include <vector>
#include <climits>
using namespace std;
typedef long long ll;
const int INF = INT_MAX;

struct Segment {
    int lazy = 0, val = 0;
};

vector<Segment> segTree;
vector<int> v;

void propagate(int idx, int l, int r) {
    segTree[idx].val += segTree[idx].lazy;
    if (l != r) {
        segTree[idx * 2].lazy += segTree[idx].lazy;
        segTree[idx * 2 + 1].lazy += segTree[idx].lazy;
    }
    segTree[idx].lazy = 0;
}

int build(int idx, int l, int r) {
    if (l == r) {
        return segTree[idx].val = v[l];
    }

    int mid = (l + r) / 2;
    return segTree[idx].val = max(build(idx * 2, l, mid), build(idx * 2 + 1, mid + 1, r));
}

void update(int idx, int l, int r, int x, int y, int val) {
    if (segTree[idx].lazy) {
        propagate(idx, l, r);
    }

    if (x <= l && r <= y) {
        if (l != r) {
            segTree[idx * 2].lazy += val;
            segTree[idx * 2 + 1].lazy += val;
        }
        segTree[idx].val += val;
		  return;
    }

    if (l > y || r < x) {
        return;
    }

    if (l == r) {
		segTree[idx].val += val;
		return;
    }


    int mid = (l + r) / 2;
	 update(idx * 2, l, mid, x, y, val);
	 update(idx * 2 + 1, mid + 1, r, x, y, val);
    segTree[idx].val = max(segTree[idx*2].val, segTree[idx*2+1].val);
}

int query(int idx, int l, int r, int x, int y) {
    if (segTree[idx].lazy) {
        propagate(idx, l, r);
    }

    if (x <= l && r <= y) {
        return segTree[idx].val;
    }

    if (l > y || r < x) {
        return -INF;
    }

    int mid = (l + r) / 2;
    return max(query(idx * 2, l, mid, x, y), query(idx * 2 + 1, mid + 1, r, x, y));
}

int main() {
    int n; cin >> n;

    segTree.resize(4 * n);
    v.resize(n);

    for (int i = 0; i < n; i++) cin >> v[i];

    int m; cin >> m;
    build(1, 0, n - 1);
    for (int i = 0; i < m; i++) {
        int t; cin >> t;

        if (t) {
            int a, b, c; cin >> a >> b >> c;
            update(1, 0, n - 1, a, b, c);
        } else {
            int x, y; cin >> x >> y;
            cout << query(1, 0, n - 1, x, y) << '\n';
        }
    }
}

