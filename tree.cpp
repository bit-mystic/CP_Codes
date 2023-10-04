#include <bits/stdc++.h>
using namespace std;

const int N= 1e5+10;;

vector <int> tree[N];
int parentarray[N];
int height[N];
int depth[N];
// int Ddepth[N];
int subtree_sum[N];
int diameter;
int root_node;
int max_depth_node;
int value[N];

void dfs_tree(int vertex, int parent = -1){
    // depth[vertex]=depth[parent]+1;
	// parentarray[vertex]=parent;
	for(int child: tree[vertex]){
		if(child==parent) continue;
		depth[child]= depth[vertex]+1;
		dfs_tree(child,vertex);
		if(height[vertex] <= height[child]) height[vertex]= height[child]+1;
		// height[vertex] = max(height[vertex],height[child]+1])
		subtree_sum[vertex] += subtree_sum[child];
	}
	subtree_sum[vertex]+= value[vertex];
	// if(depth[max_depth_node] < depth[vertex]) max_depth_node = vertex;
}
// void Ddfs_tree(int vertex,int parent = -1){
// 	for(int child: tree[vertex]){
// 		if(child==parent) continue;
// 		depth[child]= depth[vertex]+1;
// 		Ddfs_tree(child,vertex);
//     }
//     if(depth[max_depth_node] < depth[vertex]) max_depth_node = vertex;
// }

// int lca(int fst, int scd){
// 	if(depth[fst] > depth[scd]){
// 		while(depth[fst]!= depth[scd])
// 			fst=parentarray[fst];
// 	}else{
// 		while(depth[fst]!= depth[scd])
// 			scd=parentarray[scd];
// 	}

// 	while(fst != scd){
// 		fst=parentarray[fst];
// 		scd=parentarray[scd];
// 	}
// 	return fst;
// }

int main(){
	int x,a,b,v;
	cin>>x;
	int size=x;
	x--;
	// depth[-1]=0;
	for (int i=1; i<=size;i++){
		cin >> v;
		value[i]= v;
	}
	while(x--){
		cin >> a >> b;
		tree[a].push_back(b);
		tree[b].push_back(a);
	}
	
    // int fst,scd;
	// cin >> fst >> scd;
	root_node=1;
	dfs_tree(root_node);
	int max_product=1;

	// for (int i=1; i<=size;i++){
	// 	cout<<"parent of "<< i <<" : "<< parentarray[i]<<endl;
	// 	cout<<"sum of subtree with "<< i << " as root_node: "<< subtree_sum[i]<<endl;
	// 	cout<<"height["<<i<<"] : "<< height[i]<< endl;
	// 	cout<<"depth["<<i<<"] : "<< depth[i]<< endl;
	// 	depth[i]=0;
    //     cout<< '\n';
	// }
	// cout<<"lowest common ancestor of "<< fst << " and "<< scd<< " is : "<< lca(fst,scd)<<endl;

	// Ddfs_tree(max_depth_node);
    // diameter=depth[max_depth_node];
    // // Ddfs_tree(root_node);
	// cout<< "diameter of the tree is : "<< diameter << '\n';

	for(int i=1; i<=size;i++){
		int temp_product= (subtree_sum[root_node] - subtree_sum[i]);
		temp_product *= subtree_sum[i];
		if(temp_product > max_product) max_product = temp_product;
	}

	cout << max_product << endl;
}