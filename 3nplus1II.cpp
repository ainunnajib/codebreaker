#include<iostream>
using namespace std;

int main(){
	int n, t;
	cin >> n >> t;
	t--;
	while (t--){
		if (n==1) {
			n = -1;
			break;
		}
		if (n%2==0) n /= 2;
		else n = 3*n+1;
	}
	cout << n;
}