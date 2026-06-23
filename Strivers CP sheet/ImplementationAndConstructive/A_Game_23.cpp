/*
n transforms to m  

one move: 
    = n -> 2*n 
    = n -> 3*n  

if impossible then -1 
if possible then number of moves 

*/

/**/

/*
m = pow(2,x)pow(3,y)n
(6^k).w^z





*/

#include<bits/stdc++.h>
using namespace std; 

int main(){
    long long n,m; 
    cin>>n>>m; 

    long long flag = m%n;
    if (flag!=0){
        cout << -1 << endl; 
        return 0;
    } 

    long long ans;
    long long reducer = m/n; 
    // case 1: only 2   
    ans = log2(reducer);

    // case 2: only 3  
    ans = log3(reducer);

    // case 3: both 2 and 3
    



    
    return 0;
}