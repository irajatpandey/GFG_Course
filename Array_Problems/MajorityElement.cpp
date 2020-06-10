#include <bits/stdc++.h>
using namespace std;

int majorityElement(int *arr, int n, int x, int y){
	int count_x = 0;
	int count_y = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] == x) count_x++;
		if(arr[i] == y) count_y++;
	}
	
	if(count_x == count_y){
		if(x > y) return y;
		else return x;
	}
	else{
		if(count_x > count_y) return x;
		else return y;
	}
}

int main(){
	// arr[] = {1, 1, 2, 2, 3, 3, 4, 4, 4, 4, 5};
	int arr[] = {5, 22, 29, 12, 32, 69, 1, 75};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x = 29;
	int y = 96;
	cout << majorityElement(arr, n, x, y);	

	return 0;
}