/*
goal: 
- to calculate the number of bit strings of length n 
- 

*/

/*
algo: 
to find the 2 power n  
- 

*/

/*
input: 
1 - n = [1,10pow6]

output: 
1 - ans%(10pow9 + 7)

*/

#include<bits/stdc++.h>
using namespace std; 



int main(){
    long long n;
    long long mod = 1e9 + 7;
    cin>>n; 

    long long ans = 1;
    for (long long i=1;i<=n;i++){
        ans = (ans*2)%mod;
    }
    cout << ans << endl; 
    
    return 0;
}