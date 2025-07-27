#include<iostream>
#include<vector>
using namespace std;

int main(){
  int ansday = 0;
  int n;
  int x;
  int y;
  cin >> n >> x >> y;
  vector<int> rain(n + 1, 0);
  for (int day = 1; day <= n;day++){
    cin >> rain[day];
  }

  for (int day = 1;day<=n;day++){
    bool flag1 = true;
    bool flag2 = true;
    int bmin = day - x;
    int bmax = day - 1;
    int amin = day + 1;
    int amax = day + y;

    for (int bday = bmin; bday <= bmax;bday++){
      if(bday>=1 && bday<=n){
        if(!(rain[bday]>rain[day]))
        {
             flag1 = false;
             break;
        }
          
      }
    }

    for (int aday = amin; aday <= amax;aday++){
      if (aday>=1 && aday<=n){
        if(!(rain[aday]>rain[day]))
         {
          flag2 = false;
          break;
         } 
      }
    }

    if(flag1==true && flag2==true){
      ansday = day;
      break;
    }
  }

  cout << ansday << endl;
  return 0;
}