#include<iostream>
using namespace std;

int main(){
	int n, p;
	cin >> n >> p;
	int l[n];
	for(int i=0;i<n;i++) cin >> l[i];
	int a = 0, b = 0;
	int ans = 0, cur = 0;
	for(int i=0;i<n;i++){
		int x = l[i];
		if(p>=x){
			p -= x;
			cur++;
			b++;
		} else {
			while(p<x && a<b){
				p += l[a];
				a++;
			}
			if(p>=x){
				p -= x;
				b++;
			} else {
				a++;
				b++;
			}
			cur = b-a;
		}
		ans = max(ans, cur);
	}
	cout << ans;
}