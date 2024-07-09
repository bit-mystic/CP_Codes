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
		vi a(n,0),b(n,0),c(n,0);
		cin>>a>>b>>c;
		vi ah(n,0),bh(n,0),ch(n,0);
		ah[0]=a[0];bh[0]=b[0];ch[0]=c[0];
		fr(1,n){
			ah[x]=ah[x-1]+a[x];
			bh[x]=bh[x-1]+b[x];
			ch[x]=ch[x-1]+c[x];
		}
		int st,end,temp;
		int tot = (ah[n-1]+2)/3;

		// st=0,temp=0;
		// while(temp<tot) temp+=a[st++];
		// end=n-1,temp=0;
		// while(temp<tot) temp+=c[end--];
		// if((bh[end]-bh[st-1])>=tot && end>=0){
		// 	vi arr = {1,st,st+1,end+1,end+2,n};
		// 	printarr(arr);
		// 	continue;
		// }

		// st=0,temp=0;
		// while(temp<tot) temp+=a[st++];
		// end=n-1,temp=0;
		// while(temp<tot) temp+=b[end--];
		// if((ch[end]-ch[st-1])>=tot && end>=0){
		// 	vi arr = {1,st,end+2,n,st+1,end+1};
		// 	printarr(arr);
		// 	continue;
		// }

		// st=0,temp=0;
		// while(temp<tot) temp+=b[st++];
		// end=n-1,temp=0;
		// while(temp<tot) temp+=c[end--];
		// if((ah[end]-ah[st-1])>=tot && end>=0){
		// 	vi arr = {st+1,end+1,1,st,end+2,n};
		// 	printarr(arr);
		// 	continue;
		// }

		// st=0,temp=0;
		// while(temp<tot) temp+=b[st++];
		// end=n-1,temp=0;
		// while(temp<tot) temp+=a[end--];
		// if((ch[end]-ch[st-1])>=tot && end>=0){
		// 	vi arr = {end+2,n,1,st,st+1,end+1};
		// 	printarr(arr);
		// 	continue;
		// }

		// st=0,temp=0;
		// while(temp<tot) temp+=c[st++];
		// end=n-1,temp=0;
		// while(temp<tot) temp+=a[end--];
		// if((bh[end]-bh[st-1])>=tot && end>=0){
		// 	vi arr = {end+2,n,st+1,end+1,1,st};
		// 	printarr(arr);
		// 	continue;
		// }

		// st=0,temp=0;
		// while(temp<tot) temp+=c[st++];
		// end=n-1,temp=0;
		// while(temp<tot) temp+=b[end--];
		// if((ah[end]-ah[st-1])>=tot && end>=0){
		// 	vi arr = {st+1,end+1,end+2,n,1,st};
		// 	printarr(arr);
		// 	continue;
		// }

		print(a[6]);
	}
	return 0;
}