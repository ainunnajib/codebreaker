#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
typedef pair<int, int> pii;

int main(){
    int n, e; cin >> n >> e;
    int area[n]; for(int i = 0;i < n;i++) cin >> area[i];
    vector<int> adj[n];
    for(int i = 0;i < e;i++){
        int x, y; cin >> x >> y; x--; y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    bool vis[n]; memset(vis, 0, sizeof(vis));
    int paint[n][2]; memset(paint, 0, sizeof(paint));
    for(int start = 0;start < n;start++){
        if(vis[start]) continue;
        vector<pii> q;
        q.push_back({start, 0});
        int i = 0;
        while(i < q.size()){
            if(!vis[q[i].first]){
                paint[start][q[i].second] += area[q[i].first];
                vis[q[i].first] = true;
                for(auto a : adj[q[i].first]) q.push_back({a, 1-q[i].second});
            }
            i++;
        }
    }
    int ans = 0;
    for (int i = 0;i<n;i++) ans += min(paint[i][0], paint[i][1]);
    cout << ans;
}

