#include <bits/stdc++.h>
using namespace std;
int equilibriumPoint(int *arr, int n){
	int sum = 0;
	int leftSum = 0;
	for(int i = 0; i < n; i++){
		sum += arr[i];
	}
	

	for(int i = 0; i < n; i++){
		sum -= arr[i];
		if(leftSum == sum) 
			return i;
		leftSum += arr[i];
	}
	return -1;
}
int main(){
	
	int arr[] = {1, 3, 5, 2, 2};
	int n = sizeof(arr)/sizeof(arr[0]);

	cout << equilibriumPoint(arr, n) << endl;	

	return 0;
}