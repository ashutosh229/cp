/*
apartment number = n 

floor = initial,initial+(x-1)
where initial(floori) = last(floor(i-1))+1

objecttive: 
- to find the number of floor on whose range of apartments n lies


*/

/*
7 3
n = 7 
x = 3

7/3=2 
4

2
3
3   

1/5=0
2 

22/5=4 
6

987/13=75 
77






*/

/*
n 
x

solution 1: range calculation for each floor and checking

7 3 
7-2=5 
5/3=1
1+1+1=3 

1 5 
1-2=-1 
1 

22 5 
22-2=20 
20/5=4
1+4=5

987 13
987-2=985 
985/13=75 
75+1+1=77





*/

#include<bits/stdc++.h>
using namespace std; 

int main(){
    long long t; 
    cin>>t; 
    while(t--){
        long long n,x; 
        cin>>n>>x; 

        // Solution 1: Finding range and checking
        // bool flag = false;
        // long long level = 1;
        // long long lastInitialLevel; 
        // while(true){
        //     long long low;
        //     long long high;
        //     if (level==1){
        //         low = 1; 
        //         high = 2;
        //     }else{
        //         low = lastInitialLevel; 
        //         high = lastInitialLevel + (x-1);
        //     }

        //     if (n>=low && n<=high){
        //         cout << level << endl; 
        //         flag = true;
        //         break;
        //     }

        //     level++;
        //     lastInitialLevel = high+1;
        // }

        // Solution 2: Using maths  
        long long distance = n-2; 
        if (distance<=0){
            cout << 1 << endl; 
            continue;
        }

        long long numberOfFloorCycles = distance/x; 
        long long adder = distance%x; 
        long long ans = 1+numberOfFloorCycles+((adder==0)?(0):(1));
        cout << ans << endl; 
    }
    return 0;
}