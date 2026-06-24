/*
price of one shovel = k 

inifinite 10 coins + 1 r  

he should buy atleast one shovel (0 cannot be ans)

goal: 
- find the min number of shovels so that payment can be done without any change 



*/

/*
without any change - he gives exact money from his pocket  
exact money = [10x+0,10*0 + r,10x+r]
which means remainder should be 0 or r

117 3 
k = 117 
r = 3 

0 - 0 
1 - 117 - 7  
2 - 4  
3 - 1  
4 - 8 
5 - 5 
6 - 2 
7 - 9 
8 - 6 
9 - 1053
ans = 9 

237 7 
k = 237 
r = 7 

1 - 7 
ans = 1

15 2 
k = 15 
r = 2
1 - 5 
2 - 0 
ans = 2  






*/

/*
input: 
1 - k r = [1,1000] [1,9] 

algo: 
- find last digit of k 
- initial = 1
- while(true){
if (initial*last digit == 0 or r){
ans  
return;
}
}
tc: 1
sc: 1

output: 
- min num of shovels


*/ 

#include<bits/stdc++.h>
using namespace std; 

int main(){
    long long k,r; 
    cin>>k>>r;  
    for (long long i=1;i<=9;i++){
        long long digit = (i*k)%10;
        if (digit == 0 || digit==r){
            cout << i << endl; 
            return 0;
        }
    }

    cout << 10 << endl;
    return 0;
}

