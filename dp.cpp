#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,tem;
	cin >> N;
	long long happiness_from_stored[N][3];
	vector<vector<int>> array;
	for(int x=0; x < N; x++){
		vector<int> tem_array;
		int i=3;
		while(i--){
			cin >> tem;
		    tem_array.push_back(tem);
		}
		array.push_back(tem_array);
	}N--;
    for (int j=0; j<3; j++){
    	happiness_from_stored[N][j] = array[N][j];
    }
	for ( int x = N ; x > 0 ; x--){
		for (int l=0; l<3; l++){
			long long maximum = 0;
			for (int j=0; j<3; j++){
				long long temp_max;
				if (l != j){
					temp_max = happiness_from_stored[x][j];
					if(temp_max > maximum) maximum = temp_max;
				}
			}
			maximum += array[x-1][l];
			happiness_from_stored[x-1][l] = maximum;	
		}
	}


	long long max = 0;
	
	for(int i = 0; i < 3; i++){
		int f = happiness_from_stored[0][i];
		if (f > max) max = f;
	}
	
	cout << max <<endl;

	return 0;
}

// long long happiness_from_stored[100][3];

// bool visited[100010][3];

// long long happiness_from(int curr_day, int max_days, int index, vector<vector<int>>& array){
// 	if(curr_day == max_days) return 0;
// 	if(visited[curr_day][index] == true) return happiness_from_stored[curr_day][index];
// 	visited[curr_day][index] = true;
// 	long long max_happiness = 0;
// 	for (int j=0; j<3; j++){
// 		if(j != index){
// 			int fir = happiness_from(curr_day +1,max_days,j,array);
// 			fir += array[curr_day][index];
// 			if ( fir > max_happiness) max_happiness = fir;
// 		}
// 	}
// 	happiness_from_stored[curr_day][index] = max_happiness;
// 	return max_happiness;
// }