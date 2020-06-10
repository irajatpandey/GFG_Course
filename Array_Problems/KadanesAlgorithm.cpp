#include<bits/stdc++.h>
using namespace std;
int kadanesAlgorithm(int *arr, int n){
	int maxSoFar = arr[0];
	int maxValue = arr[0];

	for(int i = 1; i < n; i++){
		maxSoFar = max(arr[i], arr[i] + maxSoFar);
		maxValue = max(maxValue, maxSoFar);
	}
	return maxValue;
}
int main(){

	int arr[] = {1, 2, 3, -2, 5}; // output 9
	int n = 5;

	cout << kadanesAlgorithm(arr, n);
	return 0;
}