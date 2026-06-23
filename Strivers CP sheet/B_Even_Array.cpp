/*
0 based indexing 

good array if even element on even index and same with odd parity 

one move = swap of elements in the arra

goal:
- to find out if it is possible to make array good by doing some number of moves 
- if yes, then find the min number of moves


*/

/*
input: 
1 - t = [1,1000] 
t1 - n = [1,40] 
t2 - a1,a2,a3...an = [0,1000]

algo: 
- take two variablel t1(even hona chahiye tha, odd hain) and t2 (odd hona chahiye tha, even hain) 
- while taking inputs:
    - update t1 and t2 
- if (t1==t2) then ans = t1
else ans = -1

tc: n
sc: 1 

output: 
- if not possible then -1 and if possible, then ans 


*/

/*
3 2 7 6 
0 1 2 3 
t2 = 2
t1 = 2 
2 

3 2 6 
0 1 2
t1 = 1
t2 = 1
1 

7
0 
t1 = 1
t2 = 0 
-1 

4 9 2 1 18 3 0 
0 1 2 3 4 5 6
t1 = 0
t2 = 0 
0




*/

#include<bits/stdc++.h>
using namespace std; 

int main(){
    long long t; 
    cin>>t; 
    while(t--){
        long long n;
        cin>>n; 

        long long type1 = 0; 
        long long type2 = 0;
        for (long long i=0;i<n;i++){
            long long value; 
            cin>>value; 
            
            // even hona chahiye tha (i==even), odd hain (value==odd)
            if (i%2==0 && value%2==1){
                type1++;
            }  
            // odd hona chaiye tha (i==odd), even hain (value==even)
            if (i%2==1 && value%2==0){
                type2++;
            }
        }

        if (type1==type2){
            cout << type1 << endl;
        }else{
            cout << -1 << endl;
        }
    }
    return 0;
}
