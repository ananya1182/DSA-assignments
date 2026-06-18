#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size();
        int n=mat[0].size();
        if(m*n!=r*c){
            return mat;
        }
        vector<vector<int>>ans(r,vector<int>(c));
        for(int i=0;i<m*n;i++){
            ans[i/c][i%c]=mat[i/n][i%n];
        }
        return ans;
    }
    int main(){
        int m,n;
        cout<< " Enter rows and columns of the original matrix";
        cin >> m>> n;
    vector<vector<int>>mat(m,vector<int>(n));

cout<< " Enter matrix elements";
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin >> mat[i][j];
    }
}
int r,c;
cout<< " Enter rows and elements of the matrix to be reshaped ";
cin>> r>>c;

Solution obj;
    vector<vector<int>> result = obj.matrixReshape(mat, r, c);

 cout << "Reshaped Matrix:\n";
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

    
