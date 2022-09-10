#include<iostream>
using namespace std;

int main(){
	int n, v;
	cin >> n >> v;
	int l[n];
	for(int i=0;i<n;i++) cin >> l[i];
	int a[v+1];
	a[0] = 0;
	for(int i=1;i<=v;i++) a[i] = 999999999;
	bool p[v+1];
	p[0] = true;
	for(int i=1;i<=v;i++) p[i] = false;
	for(int i=0;i<n;i++){
		int x = l[i];
		for(int j=0;j <= v/x;j++){
			for(int k=0;k<=v;k++){
				if(!p[k]) continue;
				if(k + j*x > v) break;
				a[k + j*x] = min(a[k + j*x], a[k] + j);
				p[k + j*x] = true;
			}
		}
	}
	
	if(p[v]) cout << a[v];
	else cout << -1;
}