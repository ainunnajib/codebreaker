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

	vector<ll> v;
	ll x2, x3, x5, x7, x;

	for(x2=1;x2<=1e18 && x2>0;x2*=2){
		for(x3=1;x3<=1e18 && x3>0;x3*=3){
			for(x5=1;x5<=1e18 && x5>0;x5*=5){
				for(x7=1;x7<=1e18 && x7>0;x7*=7){
					x = x2; if(x>1e18/x3) break;
					x *= x3; if(x>1e18/x5) break;
					x *= x5; if(x>1e18/x7) break;
					x *= x7;
					v.push_back(x);
				}
			}
		}
	}
	sort(v.begin(), v.end());

	int q; cin >> q;
	while(q--){
		ll a, b; cin >> a >> b;
		cout << upper_bound(v.begin(), v.end(), b) - lower_bound(v.begin(), v.end(), a) << endl;
	}
}