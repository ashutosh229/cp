#include<iostream>
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  int pos=0; //0 for end and 1 for start
  for (int row = 1; row <= n;row++){
    if(row%2==1){
      for (int col = 1; col <= m;col++){
        cout << "#";
      }
      cout << endl;
    }
    else{
      if(pos==0)//end
      {
        for (int col = 1; col <= m - 1;col++)
          cout << ".";
        cout << "#";
        cout<<endl;
        pos = 1;
      }
      if(pos==1)//start
      {
        cout << "#";
        for (int col = 1; col <= m - 1;col++)
          cout << ".";
        cout << endl;
        pos = 0;
      }
    }
  }
    return 0;
}