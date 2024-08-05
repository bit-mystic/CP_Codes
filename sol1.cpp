#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define tc int tests;cin>>tests;while(tests--)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define vi vector<int>
#define print(variable) cout<<variable<<endl;
#define maxarr(a) *max_element(a.begin(),a.end());
#define sumarr(a) accumulate(a.begin(),a.end(),0LL);
#define hashit(arr,harr) partial_sum(arr.begin(),arr.end(),harr.begin());
int countDigit(int n) { return floor(log10(n) + 1); }
void printarr(vector<int>& arr){
	int n=arr.size();
	cout<<n<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return;}
void printif(bool condition, vector<int>& arr){
	if(condition==true) printarr(arr);
	else cout<<-1<<endl;
	return;}
void printif(bool condition){
	if(condition==true) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return;}
istream& operator>>(istream& custom_cin,vector<int>& array){
	int n=array.size();
	for(int x=1;x<n;x++) cin>>array[x];
	return custom_cin;}
signed main(){
	fastio
	tc{
		
	}
	return 0;
} 