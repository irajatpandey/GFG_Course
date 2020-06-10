#include<bits/stdc++.h>
using namespace std;
int findImmediateSmallerThanX(int *arr, int n, int k){
	pair<int,int> output{0, INT_MAX};
	for(int i = 0; i < n; i++){

		if(arr[i] < k and  output.second > abs(arr[i] - k)){
			output.first = arr[i];
			output.second = abs(arr[i] - k);
		}
	}
	return output.first;
}
int main(){

	int arr[] = {4, 67, 13, 12, 15};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k = 16;

	cout << findImmediateSmallerThanX(arr, n, k);

	return 0;
}