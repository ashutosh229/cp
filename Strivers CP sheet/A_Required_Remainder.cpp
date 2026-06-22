/*
x y n   
k%x = y 

k = xq + y


*/

/*
7 5 12345
 x= 7 
 y = 5 
 n = 12345 

 7q+5<=n 
 q<=n-5/7

 k = 7*1762+5
 12339

 5 0 4
 x = 5 
 y = 0 
 n = 4 

 10 5 15 
 x = 10 
 y = 5 
 n = 15 

 n-y/x
 




*/

#include<bits/stdc++.h>
using namespace std; 

int main(){
    long long t; 
    cin>>t; 
    while(t--){
        long long x,y,n; 
        cin>>x>>y>>n; 

        long long q = (n-y)/x; 
        cout << x*q+y << endl;
    }
    return 0;
}