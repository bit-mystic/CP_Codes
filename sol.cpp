#include "bits/stdc++.h"
using namespace std;

#define int long long int
#define fr(l,n) for(int x=l;x<n;x++)

signed main(){
	int test_cases;
	cin >> test_cases;
	while(test_cases--){
		int sl,pr;
		cin >> sl;
		pr = sl % 3;
		string qs;
		cin >> qs;
		bool check = true;
		if(pr == 1) cout << "YES" << endl; 
		else if(pr == 2){
			fr(0,sl-3)
			for(int y = x+1 ; y < sl; y+=3){
				if(qs[x] == qs[y]) {
					cout << "YES" << endl;
					check = false;
					goto disp;
				}
			}
		}
		else{
			fr(0,sl)
			for(int y= x+2; y < sl; y+=3){
				if(qs[x] == qs[y]){
					cout << "YES" << endl;
					check = false;
					goto disp;
				}
			}
		}
		disp: if(check == true) cout << "NO" << endl;
	}
	return 0;
}