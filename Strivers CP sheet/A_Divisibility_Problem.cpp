/*
a and b 

move: a = a+1
 
goal:
- find the min moves required to make a divisible by b

*/

/*
find k min in a+k s.t. a+k is divisible by b 

10 4 
a = 10 
b = 4
a+k = bx 
a = bx-k 
-k = 2 
k = -2 
k = 2 

13 9  
-k = 4 
k = -4+9 = 5 

100 13 
-k = 9 
k = -9+13=4

123 456
-k = 123 
k = -123 + 456 = 333



*/

/*
input: 
1 - t = [1,10pow4] 
t1 - a b = [1,10pow9]

algo: 
- find if already divides, if yes, then return 0 
- find k = -(a/b)+b

tc: 1
sc: 1


output: 
- ans (always exist)


*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t; 
    cin>>t; 
    while(t--){
        long long a,b;
        cin>>a>>b; 

        if (!(a%b))
        cout << 0 << endl; 
        else
        cout << (-(a%b))+b << endl;
    }
    return 0;
}