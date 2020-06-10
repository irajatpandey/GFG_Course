#include <bits/stdc++.h>
using namespace std;

void rotateArray(int *arr, int n, int k){
	reverse(arr, arr + k);
	reverse(arr + k, arr + n);
	reverse(arr, arr + n);
}
int main(){
	int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k = 3;
	rotateArray(arr, n, k);
	cout << "Reversed Array :" << endl;
	for(int i = 0; i < n; i++)
		cout << arr[i] << " ";
 

	return 0;
}