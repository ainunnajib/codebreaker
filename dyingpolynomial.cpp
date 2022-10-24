#include <iostream>
using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int q; cin >> q;
	ll a, b, c, d, l, r, mid;
	for (int i = 0; i < q; i++) {
		cin >> a >> b >> c >> d;
		l = 1;
		r = 2;
		while(true){
			if(d <= a*r*r*r + b*r*r + c*r) break;
			l = r;
			r *= 2;
		}
		while (l < r){
			mid = (l + r) / 2;
			if(d <= a*mid*mid*mid + b*mid*mid + c*mid) r = mid;
			else l = mid+1;
		}
		cout << l << '\n';
	}
	
}