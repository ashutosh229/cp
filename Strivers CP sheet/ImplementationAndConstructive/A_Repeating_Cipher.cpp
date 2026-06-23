/*

*/

/*
n-8
ooopppssss
s - pos
pos-1=3 -> index

n-(pos+1) 
p -> index-1  

n-(pos+1+3)




*/

/**/

#include<bits/stdc++.h>
using namespace std; 

int main(){
    long long n; 
    cin>>n; 
    string t; 
    cin>>t;
    
    // finding the last character repeat number 
    char last = t[n-1]; 
    long long lastIndex = n-2;
    long long lenLast = 1;
    while(true){
        if (t[lastIndex]!=t[lastIndex+1])
        break;

        lenLast++
        lastIndex--;
    }

    





    return 0;
}