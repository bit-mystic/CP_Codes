#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;

bool vis[N];

vector<int> graph[N];

void dfs(int vertex){

	vis[vertex]= true;

	for( int child: graph[vertex]){
        if(vis[child]) continue;
        dfs(child);
	}
}

int main(){
	int n,e,a,b,ans;
	cin >> n >>e;

	ans=0;

	for (int x=0; x<e; x++){
		cin >> a >> b;
		graph[a].push_back(b);
		graph[a].push_back(a);
	}

    for (int y=0; y<n; y++){
    	if(vis[y+1]) continue;
    	dfs(y+1);
    	ans++;
    }

    cout<< ans <<endl;

	return 0;
}