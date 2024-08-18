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
	if(condition==true) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return;}
istream& operator>>(istream& custom_cin,vector<int>& array){
	int n=array.size();
	for(int x=1;x<n;x++) cin>>array[x];
	return custom_cin;}
signed main(){
	fastio
	int mod=1e9+7;
	int N=2e5+7;
	vi fact(N,1); 
	for(int i=2;i<N;i++){
		fact[i] = binmul(fact[i-1],i,mod);
	}
	tc{
		int n,k; cin>>n>>k;
		vi arr(n);cin>>arr; 
		int ones=sumarr(arr);
		int zeroes=n-ones; 
		int reqmin=(k+1)/2; 
		int temp=0;
		for(int i=reqmin;i<=ones;i++){
			temp+=binmul(Combinations(fact,ones,i,mod),Combinations(fact,zeroes,k-i,mod),mod);
			temp%=mod;
		}
		print(Combinations(fact,100,100,mod))
	}
	return 0;
} 