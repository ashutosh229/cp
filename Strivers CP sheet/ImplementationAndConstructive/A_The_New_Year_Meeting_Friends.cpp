/*
x1 x2 x3 - long

*/ 

/*
x2    x1     x3

*/

#include<bits/stdc++.h>
using namespace std; 

int main(){
    long x1, x2, x3; 
    cin>>x1>>x2>>x3; 

    long maxi = max(x1,max(x2,x3));
    long mini = min(x1,min(x2,x3));

    cout << maxi-mini << endl;
}