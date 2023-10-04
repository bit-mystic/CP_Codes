#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;

bool vis[N];

vector<int> graph[N];

bool dfs(int vertex, int par){

	vis[vertex]= true;

	bool a=false;

	for( int child: graph[vertex]){
		if(vis[child] && (child==par)) continue;
        if(vis[child]) return true;

        a |=  dfs(child,vertex);
	}
	return a;
}

int main(){
	int n,e,a,b;
	cin >> n >>e;

	bool ans= false;

	for (int x=0; x<e; x++){
		cin >> a >> b;
		graph[a].push_back(b);
		graph[a].push_back(a);
	}

    for (int y=0; y<n; y++){
    	if(vis[y+1]) continue;
    	ans |= dfs(y+1, 0);
    }

    cout<< ans <<endl;

	return 0;
}