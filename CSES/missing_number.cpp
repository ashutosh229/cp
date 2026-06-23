/*
1,2,3,4,5...n except one number 

goal: 
- to find the missing number 

*/

/*
5
2 3 1 5
ans = 4


*/

/*
input:
n = [2,2.10pow5]

n-1 numbers: 
each number is distinct and lies from 1 to n

output: 
missing number


*/

#include<bits/stdc++.h>
using namespace std; 

int main(){
    long long n; 
    cin>>n; 

    long long current = 0;
    for(long long i=1;i<=n-1;i++){
        long long value; 
        cin>>value; 
        current = current + value;
    }

    long long total = (n*(n+1))/2;  

    cout << total - current << endl;

    return 0;
}

