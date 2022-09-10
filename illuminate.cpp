#include<iostream>
using namespace std;
typedef long long ll;

int main(){
	ll n, m;
	cin >> n >> m;
	string a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	ll ans = 0, lamp = 0, x;
	for(int i=0;i<n;i++){
		x = 0;
		for(int j=0;j<m;j++){
			if(a[i][j]=='.'){
				lamp++;
				x++;
			} else {
				ans += x*x;
				x = 0;
			}
		}
		ans += x*x;
	}
	for(int j=0;j<m;j++){
		x = 0;
		for(int i=0;i<n;i++){
			if(a[i][j]=='.'){
				x++;
			} else {
				ans += x*x;
				x = 0;
			}
		}
		ans += x*x;
	}
	cout << ans - lamp;
}