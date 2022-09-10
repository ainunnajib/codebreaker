#include<iostream>
#include<climits>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	int dp[n];
	dp[0] = 1;
	for(int i=1;i<n;i++){
		dp[i] = (i+1)*(i+1);
		for(int j=i-1;j>=0;j--){
			if(a[i] <= a[j])
				dp[i] = min(dp[i], dp[j] + (i-j)*(i-j));
		}
	}
	int ans = dp[0] + n*n;
	for(int i=1;i<n;i++)
		ans = min(ans, dp[i] + (n-i)*(n-i));
	cout << ans;
}
