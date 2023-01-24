#include <iostream>
#include <climits>
typedef long long ll;

using namespace std;

int main() {
    ll n, m;
    cin >> n >> m;
    ll a[n][m];
    for(ll i=0;i<n;i++)
        for(ll j=0;j<m;j++)
            cin >> a[i][j];
    
    ll lr[n][m], rl[n][m], ud[n][m], du[n][m];
    // left to right
    for(ll i=0;i<n;i++) {
        ll max_till_here = 0;
        for(ll j=0;j<m;j++) {
            max_till_here += a[i][j];
            lr[i][j] = max_till_here;
            if(max_till_here < 0) max_till_here = 0;
        }
    }
    // right to left
    for(ll i=0;i<n;i++) {
        ll max_till_here = 0;
        for(ll j=m-1;j>=0;j--) {
            max_till_here += a[i][j];
            rl[i][j] = max_till_here;
            if(max_till_here < 0) max_till_here = 0;
        }
    }

    // up to down
    for(ll j=0;j<m;j++) {
        ll max_till_here = 0;
        for(ll i=0;i<n;i++) {
            max_till_here += a[i][j];
            ud[i][j] = max_till_here;
            if(max_till_here < 0) max_till_here = 0;
        }
    }
    // down to up
    for(ll j=0;j<m;j++) {
        ll max_till_here = 0;
        for(ll i=n-1;i>=0;i--) {
            max_till_here += a[i][j];
            du[i][j] = max_till_here;
            if(max_till_here < 0) max_till_here = 0;
        }
    }

    ll ans = LLONG_MIN;
    for(ll i=0;i<n;i++)
        for(ll j=0;j<m;j++) {
            ans = max(ans, lr[i][j] + ud[i][j] - a[i][j]);
            ans = max(ans, lr[i][j] + du[i][j] - a[i][j]);
            ans = max(ans, rl[i][j] + ud[i][j] - a[i][j]);
            ans = max(ans, rl[i][j] + du[i][j] - a[i][j]);
        }
    
    cout << ans;
}