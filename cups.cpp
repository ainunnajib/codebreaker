#include <iostream>
#include <map>
#include <vector>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    map<ll, ll> m;
    ll q; cin >> q;
    ll offset = 0;
    while(q--){
        ll o, x; cin >> o >> x;
        if(o==1){
            x -= offset;
            if(m.count(x)>0 and m[x]>0) cout << "YES\n";
            else cout << "NO\n";
        } else if (o==2){
            x -= offset;
            if(m.count(x)>0) m[x]++;
            else m[x] = 1;
        } else {
            offset += x;
        }
    }
}