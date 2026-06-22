/*
n = 1  
1 
1 

n=2 
1 2 
3  
1 

n=3  
1 2 3  
3 3 
2 

n = 4 
1 2 3 4 
3  3 4 
2 

n = 5 
1 2 3 4 5 6 7 8
3 - 1
4 - 1 
5 - 2 
6 - 2 
7 - 3 
8 - 3 

if (i==even), then i/2-1 
if (i==odd), then i-1/2 



n = 15 
15 15 1515 15 15 15  15 
7+1=8



*/

#include<bits/stdc++.h>
using namespace std; 

int main(){
    long long t; 
    cin>>t; 
    while(t--){
        long long n; 
        cin>>n; 

        if (n%2){
             cout << ((n-1)/2)+1 << endl;
        }
        else{
            cout << ((n/2)-1)+1 << endl;
        }
    }
    return 0;
}