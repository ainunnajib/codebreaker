#include<iostream>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	ll MOD = 1e9 + 7, n;
	cin >> n;
	ll l[n];
	for(int i=0;i<n;i++) {
		cin >> l[i];
		l[i] %= MOD;
	}
	ll x, ans = 0;
	for(int i=0;i<n;i++) {
		x = l[i]*(l[i]+1)/2;
		x %= MOD;
		ans += x;
		ans %= MOD;
	}
	cout << ans;
}
