#include <bits/stdc++.h>
using namespace std;
void waveArray(int *arr, int n){
		for(int i = 0; i < n - 1; i += 2){
			swap(arr[i], arr[i+1]);
		}
}

int main(){
	
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr)/sizeof(arr[0]);

	waveArray(arr, n);
	for(int i = 0; i < n; i++)
		cout << arr[i] << " ";

	return 0;
}