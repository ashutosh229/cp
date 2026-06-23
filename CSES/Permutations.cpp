/*
1,2,3,4...n 

permutate such that no adjacent elements whose diff is 1 

goal: 
- to find such permutation
*/

/*
input:
1 - n = [1,10pow6]

output: 
1 - NO SOLUTION / permutation

algo:
n=1
1

n=2,3 
no solution

n>=4 
even rakho, odd rakho


tc: n
sc: 1
*/

/*

n = 8
2 4 6 8
1 3 5 7



 


 



*/

#include<bits/stdc++.h>
using namespace std; 

int main(){
  long long n; 
  cin>>n; 

  if (n==1){
    cout << 1 << endl;
  }
  else if(n==2 || n==3){
    cout << "NO SOLUTION" << endl;
  }
  else{
    long long evenbound = n/2; 
    long long oddbound; 
    if (n%2)
    oddbound = evenbound; 
    else
    oddbound = evenbound-1;

    for (long long i=1;i<=evenbound;i++){
      cout << 2*i << " ";
    }
    for (long long i=0;i<=oddbound;i++){
      cout << 2*i+1 << " ";
    }
  }

  cout << endl;

  return 0;
}
