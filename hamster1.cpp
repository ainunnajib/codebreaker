#include<iostream>
#include<climits>
#include<cstring>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int h[n]; for(int i = 0;i<n;i++) cin >> h[i];
    int dp[n]; memset(dp, -1, sizeof(dp));
    dp[0] = 0;
    for(int i = 1;i<n;i++){
        for(int j = max(0, i-k);j<i;j++){
            if(dp[i] < 0) dp[i] = dp[j] + abs(h[i] - h[j]);
            else dp[i] = min(dp[i], dp[j] + abs(h[i] - h[j]));
        }
    }
    cout << dp[n-1];
}