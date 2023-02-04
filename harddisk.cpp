#include <iostream>
#include <cstring>
#include <map>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;

ll n, c;
pll l[40];
ll a[1024*1024][2], b[1024*1024][2];
map<ll, ll> m;
ll ans = 0;
int x;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
	cin >> n >> c;
	for(int i=0;i<n;i++) {
		cin >> l[i].first >> l[i].second;
	}
    sort(l, l+n);

    for(int j=0;j<20;j++){
        x = 1<<j;
    	for(int i=0;i<1024*1024;i++){
			if(i&x){
                a[i][0] += l[j].first;
                a[i][1] += l[j].second;
                b[i][0] += l[j+20].first;
                b[i][1] += l[j+20].second;
			}
		}
	}

	for(int i=0;i<1024*1024;i++){
        if(b[i][1] && b[i][0] <= c) m[-b[i][0]] = max(m[-b[i][0]], b[i][1]);
    }

	for(int i=0;i<1024*1024;i++){
		if(a[i][1] && a[i][0] <= c){
			ans = max(ans, a[i][1]);
            auto it = m.lower_bound(a[i][0] - c);
            if(it != m.end()) ans = max(ans, a[i][1] + it->second);
		}
	}

	cout << ans << endl;
}