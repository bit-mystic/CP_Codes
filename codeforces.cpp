#include "bits/stdc++.h"
using namespace std;

#define int long long int

int N = 1e12+7;
int s = floor(sqrt(N));
int ss = floor(sqrt(s));
vector<bool> isprime(s+1,true);
// vector<bool> istprime(N,false);
void seive(){
	for(int x=2;x<=ss;x++){
		if(isprime[x]){
			for(int y=2*x;y<=s;y+=x)
				isprime[y]=false;
		}
	}
}

signed main(){
	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);
	seive();
	// tseive();
	int test_cases;
	int ans;
	cin >> test_cases;
	while(test_cases--){
		int number;
		cin >> number;
		ans = false;
		int sq = floor(sqrt(number));
		if(isprime[sq] && number!=1)
			if(sq*sq == number)
				ans = true;
		cout << (ans?"YES":"NO") << '\n';
	}
	return 0;
}