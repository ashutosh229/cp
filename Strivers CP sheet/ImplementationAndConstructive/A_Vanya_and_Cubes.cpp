/*
n cubes 
l1 - 1 
l2 - 1+2=3 
l3 - 1+2+3=6 
li - l(i-1) + i

*/

/*
25 

0+1 = 1 
0+1 = 1 

1+2=3
1+3=4

3+3=6
4+6=10

6+4=10 
10+10=20 

10+5=15
20+15=35




*/

/*
while(true){
level_cubes = prev_level_cubes + level
current = current + level_cubes 
if (n=current){
return level;
}
else if (n>current)
continue;
else{
cout << level -1;
}

prev_level_cubes = level_cubes;
level++;

1 - 10
3 - 10 
4 - 10 

7 - 10 
9 - 10
11 - 10



}


*/

#include<bits/stdc++.h>
using namespace std; 

int main(){
    long long n; 
    cin>>n;
    long long level = 1; 
    long long prev_level_cubes = 0;
    long long current = 0;
    while(true){
        long long level_cubes = prev_level_cubes + level;
        current = current + level_cubes;
        if (n==current){
            cout << level << endl; 
            return 0;
        }
        else if(n<current){
            cout << level - 1 << endl; 
            return 0;
        }
        else{
            prev_level_cubes = level_cubes; 
            level++;
        }
    }
    return 0;
}