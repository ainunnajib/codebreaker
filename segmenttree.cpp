#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<int> segTreeMin, v;

void updatepoint(int idx, int l, int r, int i, int val){
    if (l == r) {
        segTreeMin[idx] = val;
        return;
    }
    int mid = (l+r)/2;
    if (i <= mid) updatepoint(idx*2, l, mid, i, val);
    else updatepoint(idx*2+1, mid+1, r, i, val);
    segTreeMin[idx] = min(segTreeMin[idx*2], segTreeMin[idx*2+1]);
}

int query(int idx, int l, int r, int x, int y){
    if (l >= x && r <= y) return segTreeMin[idx];
    if (r < x || l > y) return INT_MAX;
    int mid = (l+r)/2;
    return min(query(idx*2, l, mid, x, y), query(idx*2+1, mid+1, r, x, y));
}

int main(){
    int n, q, o, p, val, a, b; cin >> n >> q;
    segTreeMin.resize(4*n, 0);
    v.resize(n, 0);
    while(q--){
        cin >> o;
        if (o==1){
            cin >> p >> val;
            updatepoint(1, 0, n-1, p, val);
        } else {
            cin >> a >> b;
            cout << query(1, 0, n-1, a, b) << '\n';
        }
    }
}