#include "bits/stdc++.h"
using namespace std;

#define int long long int

void printarr(vector<int> arr){
	int n=arr.size();
	// cout<<n<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return;
}

void printif(bool condition){
	if(condition==true) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return;
}

int solve(vector<int>& tr,int n){
	if(n<3) return 0;
	map<int,int> ct,nos;
	int ans=0;
	for(int x=0;x<n;x++){
		ct[tr[x]]++;
		nos[tr[x]]=x+1;
	}
	for(auto it:ct){
		int co = it.second;
		int nn = it.first;
		if(co<2) continue;
		ans+=(((co-1)*co)/2)*(nos[nn]-2);
		ans-=(((co-2)*(co-1)*co)/3);
	}
	return ans;
}

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// int n;
	// cin>>n;
	// int n,m;
	// cin>>n>>m;
	// int n,m,r;
	// cin>>n>>m>>r;

	// int ans = solve(arr,n);
	// cout << ans << endl;
	return 0;
}