#include <bits/stdc++.h>
using namespace std;
vector<int> leadersInArray(int *arr, int n){
	int max = INT_MIN;
	std::vector<int> v;
	for(int i = n - 1; i >= 0; i--){
		if(arr[i] >= max) {
			max = arr[i];
			v.push_back(max);
		}
		
	}
	reverse(v.begin(), v.end());
	return v;
}

int main(){
	
	int arr[] = {16, 17, 4, 3, 5, 2};
	int n = sizeof(arr)/sizeof(arr[0]);

	vector<int> v =leadersInArray(arr, n);
	for(auto it : v) cout << it << " ";

	return 0;
}