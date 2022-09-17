#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> a, dsu;

int find(int i){
    if(dsu[i]==i) return i;
    return dsu[i] = find(dsu[i]);
}

void merge(int x, int y){
    int rx = find(x);
    int ry = find(y);
    if(a[rx] > a[ry]) {
        dsu[ry] = rx;
        cout << rx + 1 << '\n';
    }
    else if(a[rx] < a[ry]) {
        dsu[rx] = ry;
        cout << ry + 1 << '\n';
    } else cout << -1 << '\n';
}

int main(){
    int n, q; cin >> n >> q;
    a = dsu = vector<int>(n);

    for(int i=0;i<n;i++){
        cin >> a[i];
        dsu[i] = i;
    }

    while(q--){
        int j, k; cin >> j >> k; j--; k--;
        merge(j, k);        
    }
}