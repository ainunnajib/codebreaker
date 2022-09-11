int findMin(int N, int A[]){
	int ans = A[0];
	for (int i=1;i<N;i++){
		if (ans > A[i]) ans = A[i];
	}
	return ans;
}