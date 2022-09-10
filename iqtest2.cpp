#include<iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int t, p, k; cin >> t;
	while(t--){
		cin >> p >> k;
		if(k == 0 or k%(p-1)) cout << "0\n";
		else cout << p-1 << '\n';
	}
}