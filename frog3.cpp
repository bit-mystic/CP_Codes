#include<iostream>
using namespace std;

long long cost_to[200010];
long long c;

long long cost(int x, vector<int>& height){
	if(x == 0) return 0;
	if(cost_to[x] != 0) return cost_to[x];
	long long min = 1e17;
	for(int y=0; y<x; y++){
		long long temp;
		temp = abs(height[x] - height[y]);
		temp *= temp;
		temp += c;
		temp += cost(y,height);
		if (temp < min) min = temp;
	}
	return cost_to[x] = min;
}

int main(){
	int n,tem;
	cin >> n >> c;
	vector <int> height;
	for(int x=0; x<n;x++){
		cin >> tem;
		height.push_back(tem);
	}
	cout << cost(n-1, height)<< endl;
	return 0;
}
