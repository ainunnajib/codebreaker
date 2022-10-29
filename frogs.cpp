#include <iostream>
#include <algorithm>
#include <cstring>
#include <climits>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
using namespace std;
typedef unsigned long long ll;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
	fastio
	
	int n, m, k; cin >> n >> m >> k;
	int frogs[m], mosquitoes[k];
	for(int i = 0; i < m; i++) cin >> frogs[i];
	for(int i = 0; i < k; i++) cin >> mosquitoes[i];
	int ans = INT_MAX;
	vector<int> f[k+1];
	for(int i = 0; i < m; i++){
		int smash = 0;
		for(int j = 0; j < k; j++){
			if(mosquitoes[j] % frogs[i] == 0) smash++;
		}
		ans = min(ans, smash);
		f[smash].push_back(i+1);
	}
	cout << f[ans].size() << endl;
	for(auto x : f[ans]) cout << x << ' ';
	return 0;
}