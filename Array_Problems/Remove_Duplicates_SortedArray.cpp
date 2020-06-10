#include <bits/stdc++.h>
using namespace std;
/*Time complexity : O(n)*/
/*Space complexity : O(1)*/
int remove_duplicates(int *arr, int n){
	int k = 0;
    for(int i = 1; i < n; i++)
        if(arr[i - 1] != arr[i]) arr[k++] = arr[i - 1];
    
    arr[k++] = arr[n - 1];
    return k;
}
int main(){

	int arr[] = {1, 8, 19, 22, 28, 29, 35, 39, 49, 49, 54, 68, 69, 82, 84, 85, 89, 94, 97, 100, 100};
	int n = sizeof(arr)/sizeof(arr[0]);

	int size = remove_duplicates(arr, n);

	cout << "After removing duplicates :";
	for(int i = 0; i < size; i++)
		cout << arr[i] << " ";
	return 0;
}