#include<iostream>
#include<cstring>
using namespace std;
typedef long long ll;

int main(){
    ll MOD = 1000000007;

    ll n; cin >> n;
    ll s[n]; for(ll i=0;i<n;i++) cin >> s[i];

    ll dp[n]; memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    ll total[30]; memset(total, 0, sizeof(total));

    for(ll i=0;i<n;i++){
        ll x = s[i], j = 0;
        while(x){
            if(x&1){
                total[j] += dp[i];
                total[j] %= MOD;
            }
            j++;
            x >>= 1;
        }
        if(i<n-1){
            x = s[i+1];
            j = 0;
            while(x){
                if(x&1){
                    dp[i+1] += total[j];
                    dp[i+1] %= MOD;
                }
                j++;
                x >>= 1;
            }
        }
    }

    cout << dp[n-1];
}