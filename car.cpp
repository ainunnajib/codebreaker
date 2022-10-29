#include <iostream>
#include <algorithm>
#include <cstring>
#include <climits>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
using namespace std;
typedef unsigned long long ll;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int find(int dsu[], int i){
    if(dsu[i] == i) return i;
    return dsu[i] = find(dsu, dsu[i]);
}

void merge(int dsu[], int a, int b){
    a = find(dsu, a);
    b = find(dsu, b);
    dsu[b] = a;
}

int main(){
	fastio

	int n, e; cin >> n >> e;
	vector<pair<int, pair<int, int>>> v(e);
	for(int i = 0; i < e; i++){
		int x, y, z; cin >> x >> y >> z;
		v[i] = make_pair(z, make_pair(x, y));
	}
	sort(v.begin(), v.end());
	int dsu[n + 1];
	for(int i = 0; i <= n; i++) dsu[i] = i;
	int ans = 0;
	for(int i = 0; i < e; i++){
		ans = v[i].first;
		int x = v[i].second.first;
		int y = v[i].second.second;
        merge(dsu, x, y);
        if(find(dsu, 1) == find(dsu, n)) break;
	}
    cout << ans << endl;
}