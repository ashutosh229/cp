/*
p1: 1,2,3,4....n 
p2: 1,2,3,4....n 
*/

/*
input: 
1 - t = [1,1000]
t1 - n a b = [1,100] [0,n] [0,n]

algo: 
t = 1 1 1 1 1 ... 1 = n
s1 = 1 0 0 1 0 ... 1 = a
s2 = 0 1 1 0 1 .... 0 = b 

if (b==n-a) // no draws
then - possible  
sequence finding 
s1: n n-1 n-2 n-3.....n-(a-1) 1 2 3 4 5...b
s2: 1 2 3 4.....a n n-1 n-2 n-3 ... n-(b-1)
else if (b<n-a) // drawa huye honge  
{
draws = n-a-b;
if (draws<=n-a){
possible 
sequence finding 
s1: 
s2:
}
else{
impossible
}
}
else{ // b ki value n-a se zada hogayi
not possible
}
tc: 
sc: 

output: 
if not possible, then NO 
if possible, then 
- YES 
- s1 
- s2    


*/

/*
4 1 2
n = 4 
1 2 3 4  
a = 1 
b = 2  
n-a=4-1=3 
draws = 3-2=1 



*/

#include<bits/stdc++.h>
using namespace std; 

int main(){
    long long t; 
    cin>>t; 
    while(t--){
        long long n,a,b; 
        cin>>n>>a>>b; 

        if (b==(n-a)){
            cout << "YES" << endl; 
            // TODO: remove the continue and find and print s1 and s2
            continue;
        }
        else if (b<(n-a)){
            long long draws = n-a-b; 
            if (draws<=(n-a)){
                cout << "YES" << endl; 
            // TODO: remove the continue and find and print s1 and s2
                continue;
            }
            else{
                cout << "NO" << endl;
                continue;
            }
        }
        else{
            cout << "NO" << endl; 
            continue;
        }
    }

    return 0;
}