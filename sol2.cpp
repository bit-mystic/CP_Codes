#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define tc int tests;cin>>tests;while(tests--)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fr(start,end) for(int x=start;x<end;x++)
#define rfr(end,start) for(int x=end;x>=start;x--)
#define vi vector<int>
#define maxarr(a) *max_element(a.begin(),a.end());
#define print(variable) cout<<variable<<endl;
const int mod = 1e9+7;
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
	
	return 0;
}