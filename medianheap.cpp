#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    priority_queue<int, vector<int>, greater<int>> minheap;
    priority_queue<int> maxheap;

    int n, x, a, b; cin >> n;
    string s; 
    while(n--){
        cin >> s;
        if (s=="PUSH") {
            cin >> x;
            if (maxheap.size() == 0) maxheap.push(x);
            else if (x <= maxheap.top()) maxheap.push(x);
            else minheap.push(x);
        }
        else {
            maxheap.pop();

            a = minheap.size(), b = maxheap.size();
            if (a - b > 0) {
                maxheap.push(minheap.top());
                minheap.pop();
            }
        }

        while (minheap.size() > maxheap.size()){
            maxheap.push(minheap.top());
            minheap.pop();
        }
        while (maxheap.size() > minheap.size() + 1){
            minheap.push(maxheap.top());
            maxheap.pop();
        }
    }

    vector<int> v;
    while (maxheap.size() > 0) {
        v.push_back(maxheap.top());
        maxheap.pop();
    }
    while (minheap.size() > 0) {
        v.push_back(minheap.top());
        minheap.pop();
    }

    sort(v.begin(), v.end());
    for (auto c : v) cout << c << ' ';
}