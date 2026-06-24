/*
src = 0 
target = x = [1,2,3,4.....] 

step: optionk: pos+k where k={1,2,3,4,5}

goal: 
- min steps

*/

/*
5 
1+0=1 
ans = 1 

12 
2+1=3 
ans = 3


*/

/*
input: 
1 - x = [10pow6]

algo: 
- ans = x/5+(if x%5==0, 0 othwise 1)
tc: 1
sc: 1

output: 
- ans
*/

#include<bits/stdc++.h>
using namespace std; 

int main(){
    long long x; 
    cin>>x; 

    cout << (x/5) + ((x%5==0)?0:1) << endl; 
    return 0;
}