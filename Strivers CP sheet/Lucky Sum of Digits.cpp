// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//   int n;
//   cin >> n;
//   int n1 = 0;
//   int n2 = 0;
//   string ans = "";
//   for (int i = 0; i <= n;i++){
//     if(i%4==0 && (n-i)%7==0){
//       int alpha = i/4;
//       int beta = (n-i)/7;
//       for (int j = 1; j <= alpha;j++){
//         ans = ans + "4";
//       }
//       for (int k = 1; k <= beta;k++){
//         ans = ans + "7";
//       }
//     }
//   }
//   if(ans.length()==0)
//     cout << -1 << endl;
//   else
//   cout << ans << endl;
//   return 0;
// }

#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int alpha = 0;
  int beta = 0;
  bool flag = false;
  while (4 * alpha <= n)
  {
    int first = 4 * alpha;
    int second = n - first;
    if (second % 7 == 0)
    {
      beta = second / 7;
      flag = true;
      break;
    }
    alpha++;
  }
  if(flag==false){
      cout<<-1<<endl;
  }
  else
  {
    string ans = "";
    while (alpha--)
    {
      ans = ans + "4";
    }
    while (beta--)
    {
      ans = ans + "7";
    }

    cout << ans << endl;
  }

  return 0;
}