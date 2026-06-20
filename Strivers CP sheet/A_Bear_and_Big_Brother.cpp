/*
a and b 
a<=b - initially 
1st - 3a,2b 
2nd - 9a,4b 
3rd - 27a,8b


nth - pow(3,n)a,pow(2,n)b

*/

/**/

/**/

#include<bits/stdc++.h>
using namespace std; 

int main(){
    long long a,b; 
    cin>>a>>b; 

    long long year = 0;
    while(true){
        year = year+1;
        a = 3*a;
        b = 2*b; 
        if (a>b){
            cout << year << endl;
        }
    } 
    
    return 0;
}