#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
typedef long long ll;

int main(){
    const int INF = INT_MAX;
    int n; cin >> n;
    vector<int> v(n), dp(n+1, INF);
    dp[0] = -INF;
    for(int i=0;i<n;i++) {
        cin >> v[i];
    }

    for(int i=0;i<n;i++){
        int j = upper_bound(dp.begin(), dp.end(), v[i]) - dp.begin();
        if(dp[j-1] < v[i] && v[i] < dp[j]) dp[j] = v[i];
    }

    int ans = 0;
    for(int i=0;i<=n;i++) if(dp[i] < INF) ans = i;
    cout << ans;
}