/*
array of n integers

we want to modify the array s.t. it is increasing i.e. next>=prev 

one move: increase the value of any element by one

goal: 
- find the min number of moves required


*/



/*
input: 
1 - n = [1,2.10pow5]
2 - x1,x2,x3...xn = [1,10pow9]

output:
1 - min number of moves 

algo 1: 
- go to each element 
- see if valid 
- if yes, then continue 
- if not, then use move = move + (prev-next);

tc - 10pow5 
sc = 1

*/

/*
5
3 2 5 1 7
move = (3-2)+(5-1)=1+4=5

prev = -infi 
moves = 0
3
prev = 3 
2
moves= 0+1=1
5 
prev = 5  
1
moves = 1+(4)=5 
7
prev = 7  


*/


#include<bits/stdc++.h>
using namespace std; 

int main(){
    long long n; 
    cin>>n; 

    long long prev = INT_MIN;
    long long moves = 0;
    for (long long i=1;i<=n;i++){
        long long value; 
        cin>>value; 
        if (value<prev){
            moves = moves + (prev-value);
            continue;
        }
        prev = value;
    }

    cout << moves << endl;

    return 0;
}
