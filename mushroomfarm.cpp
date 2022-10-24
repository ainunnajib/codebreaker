#include <iostream>
#include <cstring>
using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	ll r, c, k;
	cin >> r >> c >> k;
	ll g[r][c];
	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			cin >> g[i][j];
		}
	}
	ll s[r+1][c+1];
	memset(s, 0, sizeof(s));
	for(int i = 1; i <= r; i++) {
		for(int j = 1; j <= c; j++) {
			s[i][j] = s[i-1][j] + s[i][j-1] - s[i-1][j-1] + g[i-1][j-1];
		}
	}
	ll ans = 0;
	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			int x = 1, y = min(r-i, c-j);
			if(s[i+y][j+y] - s[i][j+y] - s[i+y][j] + s[i][j] < k) continue;
			while(x < y) {
				int mid = (x+y)/2;
				if(s[i+mid][j+mid] - s[i][j+mid] - s[i+mid][j] + s[i][j] >= k) y = mid;
				else x = mid+1;
			}
			ans += min(r-i, c-j) - x + 1;
		}
	}
	cout << ans << endl;
}