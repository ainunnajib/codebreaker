#include <iostream>
#include <queue>
using namespace std;
typedef long long ll;

ll n, k, i, ans, cur;

int main(){
	cin >> n >> k;
	ll l[n];
	for(i=0;i<n;i++) cin >> l[i];

	priority_queue<ll> pq;
	for(i=0;i<k;i++) pq.push(l[i]);
	
	ans = 0;
	cur = 0;
	for(i=k;i<n;i++){
		cur += pq.top();
		ans = max(ans, cur);
		pq.pop();
		pq.push(l[i]);
	}
	for(i=0;i<k;i++){
		cur += pq.top();
		ans = max(ans, cur);
		pq.pop();		
	}
	cout << ans;
	return 0;
}
