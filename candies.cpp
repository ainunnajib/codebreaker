#include<iostream>
#include<map>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    map<int, int> d;
    int n; cin >> n;
    int ans = 0;
    for(int i = 0;i<n;i++){
        int o, x; cin >> o >> x;
        if(o==1){
            if(d.count(x)>0) d[x]++;
            else d[x] = 1;
            while(d.count(ans+1)>0 and d[ans+1]>0) ans++;
        } else {
            if(d.count(x)>0 and d[x]>0){
                d[x]--;
                if(d[x]==0) ans = min(ans, x-1);
            }
        }
        cout << ans << '\n';
    }
}