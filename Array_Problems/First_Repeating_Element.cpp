#include<bits/stdc++.h>
using namespace std;

int findFirstRepeatingElement(int *arr, int n){
	unordered_map<int,int> map;

	for(int i = 0; i < n; i++)
		map[arr[i]]++;
	

	for(int i = 0; i < n; i++)
		if(map[arr[i]] > 1)
			return i + 1;
	return -1;	
}
int main(){

	int arr[] = {1, 5, 3, 4, 3, 5, 6};
	int n = sizeof(arr)/sizeof(arr[0]);
	int smallOutput = findFirstRepeatingElement(arr, n);
	cout << smallOutput << endl;
	

	return 0;
}