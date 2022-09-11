#include "flappyrabbit.h"

int prefixMax[10000000], suffixMin[10000000];

void init(vector<int> A, vector<int> B){
    int n = A.size();
    prefixMax[0] = A[0];
    for(int i=1;i<n;i++) prefixMax[i] = max(prefixMax[i-1], A[i]);
    suffixMin[n-1] = B[n-1];
    for(int i=n-2;i>=0;i--) suffixMin[i] = min(suffixMin[i+1], B[i]);
}

int min_fuel(int L, int R){
    return max(0, prefixMax[R] - suffixMin[L]);
}