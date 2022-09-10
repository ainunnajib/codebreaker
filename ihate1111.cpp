#include<iostream>
using namespace std;

bool check(int x){
	if (x < 0) return false;
	if (x % 11 == 0 
		|| x % 111 == 0 
		|| x % 1111 == 0 
		|| x % 11111 == 0 
		|| x % 111111 == 0 
		|| x % 1111111 == 0 
		|| x % 11111111 == 0 
		|| x % 111111111 == 0) 
		return true;
	return  check(x-111)
		 || check(x-1111)
		 || check(x-11111)
		 || check(x-111111)
		 || check(x-1111111)
		 || check(x-11111111)
		 || check(x-111111111);
}

int main(){
	int t, n; cin >> t;
	while(t--){
		cin >> n;
		if(check(n)) cout << "YES" << '\n';
		else cout << "NO" << '\n';
	}
}