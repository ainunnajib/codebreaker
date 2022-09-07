#include<iostream>
using namespace std;
typedef long long  ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, a, b, ans = 0;
    cin >> n;
    while(n--){
        cin >> a >> b;
        ans += a * b;
    }
    cout << ans;
}