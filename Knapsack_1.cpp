#include<bits/stdc++.h>
using namespace std;

long long ans=0,w,n,value_temp=0,weight_temp=0,state=0;
vector <long long> weight;
vector <long long> value;
int dp[101][100001];
bool vis[101][100001];

// // Function to find modular multiplicative inverse of a
// int modInverse(int a, int m)
// {
//     int m0 = m, t, q;
//     int x0 = 0, x1 = 1;
//     if (m == 1)
//         return 0;
//     while (a > 1) {
//         // q is quotient
//         q = a / m;
//         t = m;
//         // m is remainder now, process same as Euclid's algo
//         m = a % m;
//         a = t;
//         t = x0;
//         x0 = x1 - q * x0;
//         x1 = t;
//     }
//     // Make x1 positive
//     if (x1 < 0)
//         x1 += m0;
//     return x1;
// }

void max(long long x){
	if(x == n){
			if(weight_temp <= w && value_temp > ans){
			ans = value_temp;
			state = x;
		}
			return;
	}
	vis[x][weight_temp] = true;
	dp[x][weight_temp] = value_temp;
	weight_temp += weight[x];
	value_temp += value[x];
	if(weight_temp <= w){
		if(value_temp > ans){
			ans = value_temp;
			state =x;
		} 
		if(vis[x+1][weight_temp] == false) 
			max(x+1);
		if(vis[x+1][weight_temp])
			if(state > x)
				if(value_temp > dp[x+1][weight_temp]){
					max(x+1);
				}
	}
	weight_temp -= weight[x];
	value_temp -= value[x];
	if(vis[x+1][weight_temp] == false) 
		max(x+1);
	if(vis[x+1][weight_temp])
			if(state > x)
				if(value_temp > dp[x+1][weight_temp]){
					max(x+1);
				}
	return;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long tem1,tem2;
	cin >> n >> w;
	for(long long x=0; x<n;x++){
		cin >> tem1>> tem2;
		weight.push_back(tem1);
		value.push_back(tem2);
	}
	max(0);
	cout << ans << endl;
	return 0;
}