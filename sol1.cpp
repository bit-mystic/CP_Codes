#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define fortests int tests;cin>>tests;for(int _=1;_<=tests;_++)
#define all(a) a.begin(),a.end()
template <typename T>
istream &operator>>(istream &i,vector<T> &v){for(auto &it:v)cin>>it;return i;}
template <typename T>
ostream &operator<<(ostream &o,vector<T> &v){for(auto &it:v)cout<<it<<' ';return o;}
template <typename T = string>
void printif(bool a,T &tp="Yes" ){if(a==true)cout<<tp<<endl;else cout<<"No"<<endl;}
int mul(int a,int b,int m){a%=m;int res=0;while(b>0){if(b&1)res=(res+a)%m;a=(a+a)%m;b>>=1;}return res;}
int pow(int a,int b,int m){a%=m;int res=1;while (b>0){if(b&1)res=res*a%m;a=a*a%m;b>>=1;}return res;}
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	fortests{
	    
	}
	return 0;
} 