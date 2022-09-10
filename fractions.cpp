#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;

bool cmp(pll x, pll y){
	return x.first * y.second < y.first * x.second;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll n, a, b; cin >> n;
	pll l[n];
	for(int i=0;i<n;i++) cin >> l[i].first >> l[i].second;
	stable_sort(l, l+n, cmp);
	for(int i=0;i<n;i++) cout << l[i].first << ' ' << l[i].second << '\n';
}