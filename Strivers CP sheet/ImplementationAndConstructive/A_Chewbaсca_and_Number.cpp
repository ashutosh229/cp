/*
inverting digits means x->9-x 

minimum possible positive number by inverting 0 or more digits of x
decimal representation of x should not start with 0

inputs: 
1st line - x:long long

outputs: 
min possible positive number which should not contain leading zeroes
*/

/*
5-4 
6-3
7-2
8-1
9-0
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; 
    cin>>s; 
    for (int i=0;i<s.size();i++){
        int d = s[i] - '0'; 
        if (i==0 &&d==9){
            continue;
        }
        if (d>=5){
            s[i] = '0'+(9-d);
        }
    }
}