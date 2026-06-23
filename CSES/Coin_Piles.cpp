/*
left pile - a coins  
right pile - b coins  

move:
    - option 1: left-1,right-2 
    - option 2: left-2,right-1 

goal: 
- if we can empty both the piles

*/

/*
input: 
1 - t = [1,10pow5]
t1 - a b = [0,10pow9]  

algo:
a -> a-1 -> a-1-1 -> a-1-1-2 -> a-1-1-2-1
b -> b-2 -> b-2-2 -> b-2-2-1 -> b-2-2-1-2
so: 
after x1+x2 moves: 
a -> a-x1-2x2=0
b -> b-2x1-x2=0
x1+2x2 = a 
2x1+x2 = b

2x1+4x2 = 2a
2x1+x2=b
3x2 =  2a-b 
x2 = 2a-b/3 

4x1+2x2=2b 
x1+2x2=a
3x1=2b-a 
x1=2b-a/3 

if (x1 and x2 are valid integers, then fine otherwise no)







tc: 1
sc: 1

output: 
1 -  YES or NO



*/

/*
1 1 
no 

2 1
yes 

2 2 
no 

3 3 
yes 


*/

#include<bits/stdc++.h>
using namespace std; 

int main(){
    long long t; 
    cin>>t; 
    while(t--){
        long long a,b; 
        cin>>a>>b;

        if (a==0 && b==0){
            cout << "YES" << endl; 
            continue;
        }

        if (a==0 || b==0){
            cout << "NO" << endl; 
            continue;   
        }

        bool x1 = ((2*b-a)%3)==0?true:false;
        bool x2 = ((2*a-b)%3)==0?true:false; 
        if (x1 && x2){
            long long numOfMovesOption1 = (2*b-a)/3; 
            long long numOfMovesOption2 = (2*a-b)/3;
            if (numOfMovesOption1>=0 && numOfMovesOption2>=0){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}

// 860348254 722079473
// expected no
// got yes