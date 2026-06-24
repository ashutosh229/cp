/*
n is even   
n/2 can be odd or even 
if even, then even == even, works  
if odd, then even == odd, not works

first n/2 elements are even (ranges from 2, no 0 allowed)
second n/2 elements are odd (ranges from 1)
all elements should be distinct
sum of first half = sum of second half

*/

/*
input: 
1 - t = [1,10pow4] 
t1 - n = [2,2.10pow5]

sum of n over all test cases does not exceed 2.10pow5

algo:
- find y = n/2 
- if y is odd, then not possible 
- if y is even, then possible 
- find the diff = y/2 
- generate 2*1 to 2*y-1 for first half except the last element 
- then print the last element of the first half as 2*(y+diff) 
- generate 2*1+1 to 2*y+1 for the whole second half

output: 
- NO if there is no answer 
- YES if there is answer and then array elements on 2nd line

/*
n  = 2y = 2.2w = 4w

2k1 2k2 2k3    2ky | 2x1+1 2x2+1 2x3+1    2xy+1
2(sigma k) = 2(sigma x) + y
2(sigma k - sigma x) = y
(sigma k - sigma x) = y/2 = n/4 = 4w/4 = w 
sigmak - sigmax = w 

n = 4  
n/2 = 4/2 = 2 = y 
w = y/2 = 2/2 = 1  
1 2+1 = 1 3 = 2 6 
1 2  = 1 2 = 3 5

n = 8 
n/2 = 4 = y 
w = y/2 = 4/2 = 2   
1 2 3 6 = 2 4 6 12 = 24
1 2 3 4 = 3 5 7 9 = 24
*/ 

#include<bits/stdc++.h>
using namespace std; 

int main(){
    long long t; 
    cin>>t; 
    while(t--){
        long long n; 
        cin>>n;

        long long flag = n/2; 
        if (flag%2){
            cout << "NO" << endl; 
        }
        else{
            cout << "YES" << endl; 
            long long diff = flag/2;
            for (long long i=1;i<=flag-1;i++){
                cout << 2*i << " ";
            }
            cout << 2*(flag+diff) << " ";
            for (long long i=1;i<=flag;i++){
                cout << 2*i + 1 << " ";
            }
            cout << endl;
        }
    }
    return 0;
}