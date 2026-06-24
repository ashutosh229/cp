/*
a and b 
a = source 
b = target  

k = [1,10]

move: 
    - option1: a = a+k 
    - option2: a=a-k

goal: 
- find the min number of moves for source to target


*/

/*
a + k1 + k2 - k3 + k4......-kn = b  
a + sum1 - sum2 = b 
a + steps = b 
steps = b-a
steps = abs(steps) 
ans = steps/10 + (if steps%10==0, then 0 otherwise 1); 

5 5
steps = 0 
0+0 
ans = 0 

13 42 
steps = 29 
2+1=3 
ans = 3

18 4 
steps = 14 
1+1=2 
ans = 2 

1337 420 
steps = 917 
91 + 1 = 92 
ans = 92
*/

/*
input: 
1 - t = [1,2.10pow4] 
t1 - a b = [1,10pow9]

algo:
- find steps = abs(b-a) 
- ans = steps/10 + (if steps%10==0, then 0 otherwise 1)
tc: 1
sc: 1

output: 
1 - min moves


*/

#include<bits/stdc++.h>
using namespace std; 

int main(){
    long long t; 
    cin>>t; 
    while(t--){
        long long a,b; 
        cin>>a>>b; 

        long long steps = abs(b-a); 
        long long ans = steps/10 + (steps%10==0?0:1); 
        cout << ans << endl;
    }
    return 0;
}