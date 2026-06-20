/*
if the last digit!=0 then -1 
if the last digit==0 then /10

integer n
subtract 1 k times 
final result


*/

/**/

/**/

#include <bits/stdc++.h>
using namespace std; 

int main(){
    long long n,k;
    cin>>n>>k; 

    for (long long i=1;i<=k;i++){
        if (n%10==0){
            n = n/10;
        }
        else{
            n = n-1;
        }
    }

    cout << n << endl;




    return 0;
}