#include "bits/stdc++.h"
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	vector<int> dlcs(n);
	for(int x=0;x<n;x++){
		cin>>dlcs[x];
	}
	sort(dlcs.begin(),dlcs.end());
	long long ans = 0, par=1;
	int curr=0,temp;
	for(int x=0;x<n-m;x++){
		temp = dlcs[curr]+dlcs[curr+1];
		par = temp*1LL*temp;
		ans+=par;
		curr+=2;
	}
	for(int x=curr;x<n;x++){
		par = dlcs[curr]*1LL*dlcs[curr];
		ans+=par;
		curr++;
	}
	cout << ans <<'\n';
}