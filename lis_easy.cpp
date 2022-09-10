#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int l[n];
	for(int i=0;i<n;i++) cin >> l[i];
	int a[n];
	for(int i=0;i<n;i++) a[i] = 1;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(l[j]>l[i]) a[j] = max(a[j], a[i]+1);
		}
	}
	int ans = 0;
	for(int i=0;i<n;i++) ans = max(ans, a[i]);
	cout << ans;
}