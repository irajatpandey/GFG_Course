#include <bits/stdc++.h>
using namespace std;

int binary_search(int *arr, int s, int e){

	if(s > e) return -1;
	int m = s + (e - s)/2;
	if(arr[m] == 1){
		if(arr[m - 1] == 0) return m;
		 return binary_search(arr, s, m - 1);
	}
	/*else if(arr[m] == 0)*/
		  return binary_search(arr, m + 1, e);

}
int transitionPoint(int *arr, int n){
	//return binary_search(arr, 0, n - 1);

	/*another method is taking the upper bound of the 0 */
	vector<int> v(arr, arr + n);
	auto it = upper_bound(v.begin(), v.end(), 0);
	if(it == v.end()) return -1;
	return it - v.begin();


}

int main(){
	
	int arr[] = {0, 0, 0, 1, 1};
	int n = sizeof(arr)/sizeof(arr[0]);

	cout << transitionPoint(arr, n) << endl;	

	return 0;
}