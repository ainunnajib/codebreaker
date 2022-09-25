#include<iostream>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int a[n]; for (int i = 0;i<n;i++) cin >> a[i];
    int l=0, r=100000000, mid, cur, cnt;
    bool possible;
    while(l<r){
        mid = (l+r)/2;
        possible = true;
        cur = 0; cnt = 0;
        for(int i = 0;i<n;i++){
            if(a[i]>mid) {
                possible = false;
                break;
            }
            if(cur + a[i] <= mid){
                cur += a[i];
            } else {
                cnt++;
                if(cnt > m){
                    possible = false;
                    break;
                }
                cur = a[i];
            }
        }
        cnt++;
        if(cnt > m) possible = false;
        if(!possible){
            l = mid + 1;
        } else {
            r = mid;
        }
    }
    cout << l;
}