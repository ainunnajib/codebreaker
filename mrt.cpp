#include<iostream>
using namespace std;

int main(){
	int n, e, q, x, y, t;
	cin >> n >> e >> q;
	int g[n][n];
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
			g[i][j] = g[j][i] = 1e9 + 5;
	for (int i=0; i<n; i++) g[i][i] = 0;
	while (e--){
		cin >> x >> y >> t;
		g[x][y] = g[y][x] = t;
	}
	for (int k=0; k<n; k++)
		for (int i=0; i<n; i++)
			for (int j=0; j<n; j++)
				g[i][j] = g[j][i] = min(g[i][j], g[i][k] + g[k][j]);
	while (q--){
		cin >> x >> y;
		if (g[x][y] == 1e9 + 5) cout << -1 << endl;
		else cout << g[x][y] << endl;
	}
}