/*
n - number of friends  

each friend received only a single gift 


*/

/*
2 gave to 1 
3 gave to 2 
4 gave to 3
1 gave to 4 

1 = 4 
2 = 1 
3 = 2 
4 = 3 

1 - 1
3 - 2 
2 - 3 

1 - 1
2 - 3 
3 - 2 

1 - 1
2 - 2 

1 - 1 
2 - 2




*/

/*
number - index 

for (int i=1;i<=n;i++){
ans = index jahan pe i hain in array
}

*/

#include <bits/stdc++.h>
using namespace std; 

int main(){
    long n; 
    cin>>n; 

    vector<long> nums(n,0);
    for (long i=0;i<=n-1;i++){
        long value; 
        cin>>value; 
        nums[i] = value;
    } // n
    // 2 3 4 1 
    for (long i=1;i<=n;i++){
        for (long j=0;j<nums.size();j++){
            if (nums[j]==i){
                cout<<j+1<<" ";
            }
        }
    } //n2
    return 0;

    // n2
}