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
    
    int n; cin >> n;
    ll l[n], c[n]; for(int i=0;i<n;i++) cin >> l[i] >> c[i];

    map<int, vector<ll>> m;
    for(int i=0;i<n;i++) {
        if(m.count(l[i])) m[l[i]].push_back(c[i]);
        else m[l[i]] = vector<ll>({c[i]});
    }

    ll ans = 0;
    for(int i=0;i<=2e6;i++){
        if(!m.count(i)) continue;
        sort(m[i].begin(), m[i].end());

        int k = m[i].size();
        k -= k%2;
        if(k==0) continue;

        for(int j=0;j<k;j++) ans += m[i][j];
        if(!m.count(i+1)) m[i+1] = vector<ll>();
        for(int j=0;j<k/2;j++) m[i+1].push_back(m[i][2*j] + m[i][2*j+1]);
    }
    cout << ans;
}