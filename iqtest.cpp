#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t, a, p; cin >> t;
    while(t--){
        cin >> a >> p;
        if(a==1) cout << 1 << '\n';
        else cout << (a+1)%p << '\n';
    }
}