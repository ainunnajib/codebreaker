#include<iostream>
#include<map>
using namespace std;

int main(){
	int n, q;
	cin >> n >> q;
	map<int, bool> b;
	while(q--){
		string s;
		int x, y;
		cin >> s;
		if(s=="TRANSMIT"){
			cin >> x >> y;
			if(x==y)
				if(b.count(x)>0) cout << "NO" << endl;
				else cout << "YES" << endl;
			else if(b.lower_bound(x) == b.lower_bound(y) 
					&& b.upper_bound(x) == b.upper_bound(y)) 
				cout << "YES" << endl;
			else cout << "NO" << endl;
		} else if(s=="SLEEP") {
			cin >> x;
			b[x] = 1;
		} else {
			cin >> x;
			if(b.count(x)>0){
				b.erase(x);
			}
		}
	}
}
