#include<bits/stdc++.h>
using namespace std;

    // void ff(vector<vector<int>>& image, int sr, int sc, int color){

    //     // if (sr < 0 || sr >= image.size() || sc < 0 || sc >= image[0].size() || image[sr][sc] != odc) {
    //     // return;
    //     // }

    //     int odc= image[sr][sc];

    //     image[sr][sc]=color;

    //     int tsr= sr+1;
    //     int rsr=sr-1;
    //     int tsc=sc+1;
    //     int rsc=sc-1;


    //     if (tsr < image.size()) 
    //         if (odc==image[tsr][sc])
    //          ff(image,tsr,sc,color);
    //     if (rsr >= 0)
    //         if (odc==image[rsr][sc])
    //          ff(image,rsr,sc,color);
    //     if (tsc < image[0].size())
    //         if (odc==image[sr][tsc])
    //          ff(image,sr,tsc,color);
    //     if (rsc >= 0)
    //         if (odc==image[sr][rsc])
    //          ff(image,sr,rsc,color);

        // int tsr= sr+1;
        // int rsr=sr-1;
        // int tsc=sc+1;
        // int rsc=sc-1;

        // if (tsr < image.size()) 
        //     if (image[sr][sc] == image[tsr][sc])
        //      ff(image,tsr,sc,color);
        // if (rsr >= 0)
        //     if (image[sr][sc] == image[rsr][sc])
        //      ff(image,rsr,sc,color);
        // if (tsc < image[0].size())
        //     if (image[sr][sc] == image[sr][tsc])
        //      ff(image,sr,tsc,color);
        // if (rsc >= 0)
        //     if (image[sr][sc] == image[sr][rsc])
        //      ff(image,sr,rsc,color);
        
        // image[sr][sc]=color;
    // }

    // vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

    //     if( image [sr][sc] == color) return image;

    //     // int odc = image[sr][sc];

    //     ff(image,sr,sc,color);
        
    //     return image;

    // }

// void floodFill(vector<vector<int>>& image, int sr, int sc, int newColor, int oldColor) {
//     if (sr < 0 || sr >= image.size() || sc < 0 || sc >= image[0].size() || image[sr][sc] != oldColor) {
//         return;
//     }
    
//     image[sr][sc] = newColor;
    
//     floodFill(image, sr - 1, sc, newColor, oldColor); // Up
//     floodFill(image, sr + 1, sc, newColor, oldColor); // Down
//     floodFill(image, sr, sc - 1, newColor, oldColor); // Left
//     floodFill(image, sr, sc + 1, newColor, oldColor); // Right
// }

// vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
//     int oldColor = image[sr][sc];
//     if (oldColor == newColor) {
//         return image;
//     }
    
//     floodFill(image, sr, sc, newColor, oldColor);
    
//     return image;
// }



// int main() {
//     vector<vector<int>> image = {
//         {1, 1, 0},
//         {0, 1, 1}
//     };
//     int sr = 0, sc = 0, color = 3;
    
//     vector<vector<int>> modifiedImage = floodFill(image, sr, sc, color);
    
//     for (int i = 0; i < modifiedImage.size(); i++) {
//         for (int j = 0; j < modifiedImage[0].size(); j++) {
//             cout << modifiedImage[i][j] << " ";
//         }
//         cout << endl;
//     }
//     // cout<< image[1][0] << endl;
//     // cout << image[0][1] << endl;
    
//     return 0;
// }

    bool visg[200][200];

    int store[200][200];

    
    int gdfs(vector<vector<int>>& matrix, int x, int y){
        if ( visg[x][y] ) return store[x][y];

        visg[x][y]= true;

        int tem= matrix[x][y];
     
        int ct=1;
        int a=0,b=0,c=0,d=0,e=0,f=0;
        
        if ( x < matrix.size()-1)
           if ( matrix[x+1][y] > tem)
               a = gdfs(matrix,x+1,y);
        if ( x > 0)
           if ( matrix[x-1][y] > tem)
                b = gdfs(matrix,x-1,y);
        if ( y < matrix[0].size()-1)
           if ( matrix[x][y+1] > tem)
                c= gdfs(matrix,x,y+1);
        if ( y > 0)
           if ( matrix[x][y-1] > tem)
                d=gdfs(matrix,x,y-1);

        e = (a<c)?c:a;
        f = (b<d)?d:b;

        ct = (e<f)?f+1:e+1;

        store[x][y]= ct;

        return ct;
    }
    

    int longestIncreasingPath(vector<vector<int>>& matrix) {

        int ans=0;
        
        for(int i=0; i < matrix.size(); i++){
            for(int j=0; j < matrix[0].size(); j++){
                int proxy=gdfs(matrix,i,j);
            }
        }

        for(int i=0; i < matrix.size(); i++){
            for(int j=0; j < matrix[0].size(); j++){
                if (store[i][j]> ans) ans = store[i][j];
            }
        }

        return ans;
    }







int main() {
    vector<vector<int>> matrix = {
        {0,1,2,3,4,5,6,7,8,9},{19,18,17,16,15,14,13,12,11,10},{20,21,22,23,24,25,26,27,28,29},{39,38,37,36,35,34,33,32,31,30},{40,41,42,43,44,45,46,47,48,49},{59,58,57,56,55,54,53,52,51,50},{60,61,62,63,64,65,66,67,68,69},{79,78,77,76,75,74,73,72,71,70},{80,81,82,83,84,85,86,87,88,89},{99,98,97,96,95,94,93,92,91,90},{100,101,102,103,104,105,106,107,108,109},{119,118,117,116,115,114,113,112,111,110},{120,121,122,123,124,125,126,127,128,129},{139,138,137,136,135,134,133,132,131,130},{0,0,0,0,0,0,0,0,0,0}
    };

    for(int m=0; m<200;m++)
        for(int n=0; n<200; n++)
            visg[m][n]= false;

    int length = longestIncreasingPath(matrix);
    cout << "Length of the longest increasing path: " << length << endl;

    return 0;
}