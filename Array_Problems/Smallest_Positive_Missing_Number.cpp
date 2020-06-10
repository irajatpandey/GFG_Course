#include<bits/stdc++.h>
using namespace std;
int smallestPositiveMissingNumber(int *arr, int n){
	bool p[n+1] = {false};
    for(int i = 0; i < n; i++){
        if(arr[i] > 0 and arr[i] <= n)
         p[arr[i]] = true;
         
    }
    for (int i = 1; i <= n; i++) 
        if (!p[i]) 
            return i;
            
    return n+1; 
}
int main(){

	int arr[] = {1, 2, 3, -2, 5}; // output 4
	int n = 5;

	cout << smallestPositiveMissingNumber(arr, n);
	return 0;
}