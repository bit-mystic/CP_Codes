#include "bits/stdc++.h"
using namespace std;

#define int long long int
#define tc int tests;cin>>tests;while(tests--)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fr(start,end) for(int x=start;x<end;x++)
#define rfr(end,start) for(int x=end;x>=start;x--)
#define vi vector<int>
#define print(variable) cout<<variable<<endl;

const int mod = 1e9+7;

void printarr(vector<int>& arr){
	int n=arr.size();
	// cout<<n<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return;
}

void printif(bool condition, vector<int>& arr){
	if(condition==true) printarr(arr);
	else cout<<"NO"<<endl;
	return;
}

void printif(bool condition){
	if(condition==true) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return;
}

istream& operator>>(istream& custom_cin,vector<int>& array){
	int n=array.size();
	for(int x=0;x<n;x++) cin>>array[x];
	return custom_cin;
}

signed main(){
	tc{
		int n,m;cin>>n; 
		vi a(n),b(n);
		for(int x=0;x<n;x++) cin>>a[x];
		for(int x=0;x<n;x++) cin>>b[x];
		map<int,int> mp1;
		map<int,int> mp2;
		set<int> s1,s2;
		fr(0,n){
			mp1[a[x]]++;
			mp2[b[x]]++;
			s1.insert(a[x]);
			s2.insert(b[x]);
		}
		bool ans=true;
		fr(0,n){
			int tf = a[x];
			if(s2.find(tf)==s2.end()){
				ans==false;
				break;
			}
			else if(mp1[tf]!=mp2[tf]){
				ans==false;
				break;
			}
		}
		printif(ans);
	}
	return 0;
}