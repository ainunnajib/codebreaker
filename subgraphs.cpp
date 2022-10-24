#include <iostream>
#include <algorithm>
#include <cstring>
#include <climits>
#include <vector>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
using namespace std;
typedef long long ll;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
    fastio
    
    int n, e; cin >> n >> e;
    vector<int> adj[n];
    while(e--){
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bool vis[n]; memset(vis, 0, sizeof(vis));
    int ans = 0;
    for(int i = 0;i < n;i++){
        if(vis[i]) continue;
        ans++;
        queue<int> q;
        q.push(i);
        vis[i] = 1;
        while(!q.empty()){
            int x = q.front(); q.pop();
            for(auto a : adj[x]){
                if(vis[a]) continue;
                q.push(a);
                vis[a] = 1;
            }
        }
    }
    cout << ans;
}