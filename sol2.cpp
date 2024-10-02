#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define tc int tests;cin>>tests;while(tests--)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define vi vector<int>
#define print(variable) cout<<variable<<endl
#define maxarr(a) *max_element(a.begin(),a.end())
#define sumarr(a) accumulate(a.begin(),a.end(),0LL)
#define all(a) a.begin(),a.end()
int inv(int a, int m) {
  return a <= 1 ? a : m - (m/a) * inv(m % a,m) % m;}
int countDigit(int n) { return floor(log10(n) + 1); }
int binmul(int a, int b, int m) {
	a%=m;
	int res = 0;
	while (b > 0) {
        if (b & 1)
            res = (res + a) % m;
        a = (a + a) % m;
        b >>= 1;
    }
    return res;}
int binpow(int a, int b, int m) {
    a %= m;
    int res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;}
int Combinations(vi& factorial, int n, int k, int m) {
    return factorial[n] * inv(factorial[k] * factorial[n - k] % m,m) % m;}
vector<bool> sieve(int n){
    vector<bool> prime(n+1,true);
    prime[0] = false;
    prime[1] = false;
    int m = sqrt(n);
    for (int p=2; p<=m; p++){
        if (prime[p]){
            for (int i=p*2; i<=n; i += p)
            prime[i] = false;
        }
    }
    // vector<int> ans;
    // for (int i=0;i<n;i++)
    //     if (prime[i])
    //         ans.push_back(i);
    return prime;}
void printarr(vector<int> arr){
	int n=arr.size();
	// cout<<n<<endl;
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
	if(condition==true) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	return;}
istream& operator>>(istream& custom_cin,vector<int>& array){
	int n=array.size();
	for(int x=0;x<n;x++) cin>>array[x];
	return custom_cin;}
signed main(){
	
	return 0;
} 