#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define tc int tests;cin>>tests;while(tests--)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define vi vector<int>
#define maxarr(a) *max_element(a.begin(),a.end());
#define print(variable) cout<<variable<<endl;
void printarr(vector<int>& arr){
	int n=arr.size();
	// cout<<n<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return;}
void printif(bool condition, vector<int>& arr){
	if(condition==true) printarr(arr);
	else cout<<"NO"<<endl;
	return;}
void printif(bool condition){
	if(condition==true) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return;}
istream& operator>>(istream& custom_cin,vector<int>& array){
	int n=array.size();
	for(int x=0;x<n;x++) cin>>array[x];
	return custom_cin;}
signed main(){
	fastio
	tc{
		int a1,a2,b1,b2;cin>>a1>>a2>>b1>>b2;
		if(a1<a2) swap(a1,a2);
		if(b1<b2) swap(b1,b2);
		int ans;
		if(a1==b1 && b2==a2) ans=0;
		else if(a2>=b1) ans=4;
		else if(a1>=b1 && a2>=b2) ans=2;
		else ans=0;
		print(ans)
	}
}
