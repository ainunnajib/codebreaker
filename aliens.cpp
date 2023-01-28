#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<string, int> curcon[11], maxcon[11], prev;
    int n; cin >> n;
    while(n--){
        string loc;
        int q, ty;
        cin >> loc >> q;
        if(q==1){
            cin >> ty;
            ty++;
            if(ty==prev[loc]) curcon[ty][loc]++;
            else curcon[ty][loc] = 1;
            maxcon[ty][loc] = max(maxcon[ty][loc], curcon[ty][loc]);
            prev[loc] = ty;
        } else {
            int ans = maxcon[1][loc];
            for(int i=2;i<=10;i++) ans = max(ans, maxcon[i][loc]);
            cout << ans << endl;
        }
    }
}