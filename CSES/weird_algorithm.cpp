/*
n 
- 1 \le n \le 10^6

if n is even, n=n/2
if n is odd, 3n+1

repeats until n is 1

goal: simulation until n is 1


*/

/**/

/*
input: 
n = 1-10pow6 

output: 
line containing all values in the simulation



*/

#include<bits/stdc++.h>
using namespace std; 

int main(){
  long long n; 
  cin>>n;
  
  cout << n << " ";

  while(n!=1){
    if(n%2){
      n = 3*n + 1;
    }else{
      n = n/2;
    }
    cout << n << " ";
  }

  cout << endl;

  return 0;
}


