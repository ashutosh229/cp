/*
a+b=x1 
b+c=x2 
c+a=x3
a+b+c=x4

goal: 
- to find 3 positive integers (>0)

*/
/*
input: 
1 - x1 x2 x3 x4 = [2,10pow9]

algo: 
- c = x4 - x1 
b = x4 - x3 
a = x4 - x2
tc: 1
sc: 1

output: 
1 - a b c

*/
/*
a+b=x1 
b+c=x2 
c+a=x3
a+b+c=x4





*/

#include<bits/stdc++.h>
using namespace std; 

int main(){ 
    long long maxi = INT_MIN;
    vector<long long> nums(4,0); 
    for (long long i=1;i<=4;i++){
        long long value; 
        cin>>value; 
        maxi = max(maxi,value);
        nums[i-1] = value;
    }
    
    for (long long i=1;i<=4;i++){
        if (nums[i-1]==maxi)
        continue; 

        cout << maxi - nums[i-1] << " "; 
    }
    
    return 0;
}