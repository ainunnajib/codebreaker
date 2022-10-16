#include<iostream>
using namespace std;

int main(){
    string a, b; cin >> a >> b;
    int m, n; m = a.length(); n = b.length();
    int d[m+1][n+1];
    for (int i=0;i<=m;i++) d[i][0] = i;
    for (int j=0;j<=n;j++) d[0][j] = j;
    for (int i=1;i<=m;i++){
        for (int j=1;j<=n;j++){
            d[i][j] = min(min(d[i-1][j]+1, d[i][j-1]+1), d[i-1][j-1] + (a[i-1] != b[j-1]));
        }
    }
    cout << d[m][n];
}