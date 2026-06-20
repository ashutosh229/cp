#include<iostream>
using namespace std;
#include<vector>

int main(){
    int test;
    cin>>test;
    for (int t = 1; t <= test;t++){
        int rows;
        int cols;
        cin>>rows>>cols;
        vector<vector<char>> matrix(rows,vector<char>(cols,'0'));
        for(int i=0;i<=rows-1;i++){
          for (int j = 0; j <= cols-1;j++){
            cin >> matrix[i][j];
          }
        }
        int res = 0;
        for (int i = 0; i <= cols - 1;i++){
          if(matrix[rows-1][i]== 'D')
             res++;
        }
        for(int i=0;i<=rows-1;i++){
          if(matrix[i][cols-1]=='R')
            res++;
        }

        cout << res << endl;
    }
}