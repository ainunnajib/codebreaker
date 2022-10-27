#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n; cin >> n;
	int pointsTo[n]; memset(pointsTo, 0, sizeof(pointsTo));
	vector<int> pointedFrom[n];
	priority_queue<int> cur;
	int ans[n]; memset(ans, 0, sizeof(ans));
	for (int i = 0; i < n; i++) {
		int a, b; cin >> a >> b;
		if(a>0){
			a--;
			pointsTo[i]++;
			pointedFrom[a].push_back(i);
		}
		if(b>0){
			b--;
			pointsTo[i]++;
			pointedFrom[b].push_back(i);
		}
		if(a<0 && b<0){
			ans[i] = n;
			cur.push(i);
		}
	}

    int prev = n;
    while(!cur.empty()){
        int now = cur.top(); cur.pop();
        ans[now] = prev;
        prev--;

        for(auto x : pointedFrom[now]){
            if(ans[x] > 0) continue;
            pointsTo[x]--;
            if(pointsTo[x] == 0){
                cur.push(x);
            }
        }
    }

	for(int i = 0; i < n; i++){
		cout << ans[i] << " ";
	}
	cout << endl;
	return 0;
}