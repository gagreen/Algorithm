long long sum(int *a, int n) {
	long long hap = 0;
	int i;
	
	for(i=0; i<n; i++){
		hap += a[i];
	}
	
	return hap;
}
