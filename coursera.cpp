#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
	int n;
	cin>>n;
	int arr[n];
	for(int x=0;x<n;x++){
		cin>>arr[x];
	}
	int max = 0;
	int sec = 0;
	for(int y=0;y<n;y++){
		if(arr[y]>max){
			sec=max;
			max = arr[y];
		}
		else if(arr[y]>sec) sec = arr[y];
	}
	cout << max*sec << endl;
}