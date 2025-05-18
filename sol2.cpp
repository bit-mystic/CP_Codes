#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fortests int tests;cin>>tests;for(int _=1;_<=tests;_++)
#define all(a) a.begin(),a.end()
const int mod = 1e9+7;
template <typename T>
istream &operator>>(istream &i,vector<T> &v){for(auto &it:v)cin>>it;return i;}
template <typename T>
ostream &operator<<(ostream &o,vector<T> &v){for(auto &it:v)cout<<it<<' ';return o;}
template <typename T = string>
void printif(bool a,T tp="Yes" ){if(a==true)cout<<tp<<endl;else cout<<"No"<<endl;}

ll mul(ll a,ll b){a%=mod;ll res=0;while(b>0){if(b&1)res=(res+a)%mod;a=(a+a)%mod;b>>=1;}return res;}
ll exp(ll a,ll b){a%=mod;ll res=1;while (b>0){if(b&1)res=res*a%mod;a=a*a%mod;b>>=1;}return res;}

bool poss(vector<int>& v1, vector<int>& v2){
    for(int i=0;i<v1.size();i++) if(v1[i]<v2[i]) return false;
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    fortests{
        
    }
    return 0;
} 