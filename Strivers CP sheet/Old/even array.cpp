#include<iostream>
using namespace std;

int main(){
  int t;
  cin >> t;
  for (int test = 1; test <= t;test++){
    int n;
    cin >> n;
    int x;
    int fine = 0;
    int even = 0;
    int odd = 0;
    for (int i = 0; i <= n - 1;i++){
      cin >> x;
      if(x%2==i%2)
        fine++;
      else if(i%2==1 && x%2==0)
        odd++;
      else if(i%2==0 && x%2==1)
        even++;
    }
    if(fine==n)
      cout <<0<< endl;
    else{
      if(even==odd)
        cout <<even<< endl;
      else
        cout <<-1<< endl;
    }
  }
    return 0;
}