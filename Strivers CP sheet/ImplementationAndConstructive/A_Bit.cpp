/*
x++ or ++x 
x-- or --x 

inputs: 
1 - n 
2 - 

*/

#include <iostream>
using namespace std; 

int main(){
    long n;
    cin>>n;
    long long x=0;
    while(n--){
        string s; 
        cin>>s; 
        if (s=="++X" || s=="X++"){
            x = x+ 1;
        }else{
            x = x - 1;
        }
    }
    cout<<x<<endl; 
}