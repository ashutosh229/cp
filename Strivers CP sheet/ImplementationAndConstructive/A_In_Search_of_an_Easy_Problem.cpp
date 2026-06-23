/*
n people 
0 - easy 
1 - hard
*/

/**/

/**/

#include <bits/stdc++.h>
using namespace std; 

int main(){
    long n; 
    cin>>n; 

    while(n--){
        long response; 
        cin>>response; 
        if (response==1){
            cout<<"hard"<<endl; 
            return 0;
        }
    }

    cout<<"easy"<<endl;

    return 0;
}