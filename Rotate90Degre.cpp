#include<iostream>
#include<vector>
#include<
using namespace std;

void rotate90Deg(vector<vector<int> >&mat){
    int n=mat[0].size();
    int row=mat.size();
    for(int i=0;i<row;i++){
        for(int j=i;j<n;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
    for(int i=0;i<row;i++){
        reverse(mat[i][0].begin(),mat[i][n-1]);
    }
}
int main(){
    vector<vector<int>>mat={{1,2,3},
                           {4,5,6},
                           {7,8,9}};
                        rotate90Deg(mat);
                        for(int i=0;i<mat.size();i++){
                            for(int j=0;j<mat[0].size();j++){
                                cout<<mat[i][j]<<" ";
                            }
                            cout<<endl;
                        }   
                        return 0;
} 