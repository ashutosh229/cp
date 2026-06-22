/*
a+A = b+B = c+C = x (let us say the value after giving coins)  
A+B+C = n 
x-a+x-b+x-c = n
3x = n+(a+b+c) 
x = (n+(a+b+c))/3 

if(n+(a+b+c) not divisble by 3), then no 
if (x>=all there of them), then yes otherwise no

*/

#include<bits/stdc++.h>
using namespace std; 

int main(){
    long long t; 
    cin>>t; 
    while(t--){
        long long a,b,c,n; 
        cin>>a>>b>>c>>n; 

        long long divisor = n+(a+b+c);
        if (divisor%3){
            cout << "NO" << endl; 
            continue;
        }
        long long x = divisor/3; 
        if (x<a || x<b || x<c){
            cout << "NO" << endl; 
            continue;
        }

        cout << "YES" << endl; 
    }
    return 0;
}