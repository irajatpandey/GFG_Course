#include<bits/stdc++.h>
using namespace std;
void arrange(long long arr[], int n) {
 
    int k = 0;
    vector<long long> a(arr, arr + n);
    for(auto i=0; i<n; i++) a[i] += (a[a[i]] % n) * n;
    for(auto i=0; i<n; i++) a[i] /= n;
    for(auto i : a) arr[k++] = i;
}
int main(){


	long long int arr[] = {4, 0, 2, 1, 3};
	long long int n = sizeof(arr)/sizeof(arr[0]);
	arrange(arr, n);
	for(int i = 0; i < n; i++) cout << arr[i] << " ";
}