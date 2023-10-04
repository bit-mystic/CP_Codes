#include<bits/stdc++.h>
using namespace std;

const int N=1e5;
bool vis[N];
queue<int> A;
vector<int> graph[N];
int depth[N];

void bfs(int vertex){
	// if (vis[vertex]) return;
	A.push(vertex);
	vis[vertex]=true;
	
	while(!A.empty()){
		int v= A.front();
		A.pop();

	    for (auto child: graph[v]){
	    	if(!vis[child]){
	    		A.push(child);
	    		vis[child]=true;
	    	    depth[child]= depth[v] +1;
	    	}
	    }
	}
}
int main(){
	int a,b,e,v,n;
	cin >> v >> e;
	for (int x=0; x<e; x++){
		cin >> a >> b;
		graph[a].push_back(b);
		graph[a].push_back(a);
	}
	int root_node= 1;
    bfs(root_node);

    for (int i=1; i<=v ;i++){
		// cout<<"parent of "<< i <<" : "<< parentarray[i]<<endl;
		// cout<<"height["<<i<<"] : "<< height[i]<< endl;
		cout<<"depth["<<i<<"] : "<< depth[i]<< endl;
		// depth[i]=0;
        // cout<< '\n';
	}
}