#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  while(n--){
    string str;
    cin >> str;
    long long len = str.length();
    bool zero = true;
    long long  sum = 0;
    long long  even = 0;
    for (long long i = 0; i <= len - 1; i++)
    {
      int x = str[i] -'0';
      if(x==0)
        zero = true;
      sum = sum + x;
      if(x%2==0)
        even = even + 1;
    }

    if(zero==true && sum%3==0 && even>=2)
      cout << "red" << endl;
    else
      cout << "cyan" << endl;
  }
  return 0;
}