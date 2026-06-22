/*
n 

m -> a1 s.t. (a1 is from 1 to n) and (a1 is even) -> n-a1 
e -> a2 s.t. (a2 lies from 1 to n) and (a2 is odd) -> n-a1-a2





*/

/*
1 ≤ n ≤ 109

n=1 
m -> [1,1] -> [1] -> no choose -> e

n=2  
m -> [1,2] -> [2] -> 2-2=0 
e -> [1,0] -> m

n=3 
m -> [1,3] -> [1,2,3] -> 3-2=1  
e -> [1,1] -> [1] -> 0 
m -> [1,0] -> e  

n=4 
m -> [1,2,3,4] -> [4] -> 0 
e -> [1,0] -> m 

n=5 
m -> [1,2,3,4,5] -> 5-4=1 
e -> [1,1] -> 0 
m -> e  

n = even 
m -> [1,2,3,4...,e] -> n-n=0 
e - [1,0] -> m  

n = odd 
m -> [1,2,3,....o] -> n-(n-1) = 1 
e - [1,1] -> 1-1=0 
m - e

*/

#include<bits/stdc++.h>
using namespace std; 

int main(){
    long long n;
    cin>>n; 

    if (n%2)
    cout << "Ehab" << endl; 
    else 
    cout << "Mahmoud" << endl;

    return 0;
}