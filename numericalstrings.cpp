#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

bool cmp(string x, string y){
    return (x + y) > (y + x);
}

int main(){
    int n, k; cin >> n >> k;
    string s[n];
    for(int i=0;i<n;i++) cin >> s[i];
    sort(s, s+n, cmp);
    int l[6] = {0, 0, 0, 0, 0, 0};
    for(int i=0;i<n;i++) l[s[i].length()]++;
    int kk = k;
    for(int j=5;j>0;j--){
        if(kk>=l[j]) kk -= l[j];
        else {
            l[j] = kk;
            kk = 0;
        }
    }
    int i = 0, j;
    while(k>0){
        j = s[i].length();
        if(l[j]>0) {
            cout << s[i];
            l[j]--;
            k--;
        }
        i++;
    }
}