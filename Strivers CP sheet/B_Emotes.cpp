/*
a1 a2 a3 ... an 

m numbers to maximize sum 
same emote only allowed k times in a row
different indices means different emotes 

goal:
- find the max possible happiness


*/

/*
if we need to max the sum and there are no restrictions on selection of element, then select max element M 
use M k times 
then use second highest m for 1 time 
and then again M k times 
then again m for 1 time and go on...  

k + 1 + k + 1 + k + 1..  
Mk + m + MK + m + MK + m..  
ans= (Mk+m)x + My

(k+1)x+y=n
x = n/(k+1)
y = n%(k+1)

6 9 2
1 3 3 7 4 2
n = 6 
m = 9 
k = 2 
M1 = 7 
M2 = 4 
x = 9/3 = 3
y = 9%3 = 0
ans = 18*3 = 54  




*/

/*
input: 
1 - n m k = [2,2.10pow5], [1,2.10pow9], [1,2.10pow9], k<=m 
2 - a1 a2 a3 .... an = [1,10pow9]

algo:
- find M1 and M2 using sorting 
- find x and y using: 
x = m/(k+1)
y = m%(k+1)
- find ans = (M1k+M2)x + M1y
tc:nlogn
sc:n

output: 
1 - ans 
*/

#include<bits/stdc++.h>
using namespace std; 

int main(){
    long long n,m,k; 
    cin>>n>>m>>k;
    
    vector<long long> nums(n,0);
    for (long long i=0;i<n;i++){
        long long value; 
        cin>>value; 
        nums[i] = value;
    }
    
    sort(nums.begin(),nums.end());
    long long max1 = nums[n-1]; 
    long long max2 = nums[n-2];
    
    long long x = m/(k+1); 
    long long y = m%(k+1); 

    long long ans = (max1*k+max2)*x + max1*y; 
    cout << ans << endl;

    return 0;
}