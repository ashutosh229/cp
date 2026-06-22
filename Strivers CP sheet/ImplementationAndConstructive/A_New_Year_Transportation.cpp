/*
1 2 3 4 5....n -> cells  

a1, a2, a3,......,an-1 positive integers and 1 ≤ ai ≤ n - i
min value (i+1) -> just next cell 
max value (n) -> last cell 

1,2,3,4....n-1 -> portals   

ith portal goes from cell i to i+ai
backwards movement now allowed

goal: 
standing at cell 1 
need to go to cell t 
tell yes if possible to go otherwise no





*/


/*
8 4
1 2 1 2 1 2 1
n=8 
t=4 

1->1st cell->1st portal->1+1=2 i.e. 2==4  
2->2nd cell->2nd portal->2+2=4 i.e. 4=4, then return yes
yes 

8 5
1 2 1 2 1 1 1
n=8 
t=5 

1->1st portal->1+1=2  
2->2nd portal->2+2=4 
4->4th portal->4+2=6 where 6>5, then early return
*/

/*
n 
t
a1, a2, a3, a4, ... , an-1 

check at each step: 
if destination==target, then yes 
if destination>target, then never 
if destination<target, continue



*/

#include<bits/stdc++.h>
using namespace std; 

int main(){
    long long n,t; 
    cin>>n>>t; 

    long long neededIndex = 1;
    for (long long i=1;i<=n-1;i++){
        long long value;  
        cin>>value; 

        if (neededIndex==i){
            long long destination = neededIndex+value;
            if (destination==t){
                cout << "YES" << endl; 
                return 0;
            }
            else if (destination>t){
                cout << "NO" << endl; 
                return 0;
            }
            else{
                neededIndex = destination;
                continue;
            }
        }
        else{
            continue;
        }
    }
    return 0;
}