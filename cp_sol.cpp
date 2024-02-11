#include "bits/stdc++.h"
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int test_cases;
	cin >> test_cases;
	while(test_cases--){
		int n;
		cin>>n;
		string a,b,c;
		cin>>a;
		cin>>b;
		cin>>c;
		string ans = "NO";
		for(int x=0;x<n;x++){
			if(a[x]!=c[x] && b[x]!=c[x]){
				ans="YES";
				break;
			}
		}
		cout << ans << endl;
	}
	return 0;
}