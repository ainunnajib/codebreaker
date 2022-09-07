#include<iostream>
using namespace std;
typedef long long ll;

int main(){
    ll n; cin >> n;
    ll a[n], b[n];
    for(ll i=0;i<n;i++) cin >> a[i];
    for(ll i=0;i<n;i++) cin >> b[i];
    ll m = b[n-1];
    ll ans = a[n-1]*m;
    for(ll i=n-2;i>=0;i--){
        m = max(b[i], m);
        ans += a[i]*m;
    }
    cout << ans;
}