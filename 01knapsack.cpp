#include<iostream>
using namespace std;
typedef long long ll;

int main(){
	int N, W;
	cin >> N >> W;
	ll w[N+1], v[N+1], dp[N+1][W+1];
	w[0] = v[0] = 0;
	for (int j=0;j<=W;j++) dp[0][j] = 0;
	for (int i=0;i<=N;i++) dp[i][0] = 0;
	for (int i=1;i<=N;i++) cin >> w[i] >> v[i];
	for (int i=1;i<=N;i++)
		for (int j=1;j<=W;j++)
			if (j < w[i]) dp[i][j] = dp[i-1][j];
			else dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]] + v[i]);
	cout << dp[N][W];
}