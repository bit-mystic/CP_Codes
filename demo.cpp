#include <bits/stdc++.h>
using namespace std;

bool check(vector<int>& arr,int boxes,int t){
	int t_tem = 0;
	int diam_tem=0;
	for(int x = 0; x < arr.size(); x++){
        if(arr[x] > boxes) return false;
		if((diam_tem + arr[x])>boxes){
			diam_tem = arr[x];
			t_tem++;
		}else diam_tem+=arr[x];
	}t_tem++;
	if(t_tem  <= t) return true;
	else return false;
}

int main(){
	int n;
	cin >> n;
	vector<int> arr(n);
	int sum = 0;
	int maxi = 0;
	for(int x = 0; x < n; x++){
		cin>>arr[x];
		sum += arr[x];
		maxi = max(maxi,arr[x]);
	}
	int t;
	cin >> t;
	int high = sum;
	int lo = 0;
	while(high - lo){
		int mid = lo + (high-lo)/2;
		if(check(arr,mid,t)){
			high=mid;
		}else lo = mid+1;
	}
	cout << high << endl;
	return 0;
}
