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

int main(){
	fastio

	int n; cin >> n;
	int a[n+1];
	a[0] = -1;
	for(int i = 1; i <= n; i++) cin >> a[i];
	int correct = 0;
	for(int i = 1; i <= n; i++) if(a[i] == i) correct++;
	
	int q; cin >> q;
	int x, y, ans = 0;
	for(int i = 0; i < q; i++) {
		cin >> x >> y;
		if(a[x] == x) correct--;
		if(a[y] == y) correct--;
		swap(a[x], a[y]);
		if(a[x] == x) correct++;
		if(a[y] == y) correct++;

		if(correct == n) ans++;
	}
	cout << ans << endl;
	for(int i = 1; i <= n; i++) cout << a[i] << " ";
	cout << endl;
}