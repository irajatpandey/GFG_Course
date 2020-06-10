#include<bits/stdc++.h>
using namespace std;
void subArraySumK(int *arr, int n, int sum){
	int currSum = 0;
	bool flag = true;
	int left = 0;
	for(int i = 0; i < n; i++){
		currSum += arr[i];
		while(currSum > sum ){
			currSum -= arr[left++];
		}
		if(currSum == sum){
			cout << left + 1 << " " << i + 1;
			flag = false;
			break;
		}

	}
	if(flag) cout << -1 << endl;
}
int main(){

	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int sum = 15;
	int n = sizeof(arr)/sizeof(arr[0]);
	subArraySumK(arr, n, sum);

	return 0;
}