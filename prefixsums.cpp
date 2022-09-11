#include<iostream>
using namespace std;
typedef long long ll;

int n, q, a, b;
ll l, s[1000001];

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	s[0] = 0;
	cin >> n >> q;
	for(int i=0;i<n;i++) {
		cin >> l;
		s[i+1] = s[i] + l;
	}
	for(int i=0;i<q;i++){
		cin >> a >> b;
		cout << s[b] - s[a-1] << '\n';
	}
}