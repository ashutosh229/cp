/*
a1,a2,a3....,an -> rain measure on each day for n days 
all a's are distinct
not so rainy day = crest in the values from d-x  to d+y and range  should be considered in 1 to n only

goal: to find the earliest not so rainy day
*/


/*
10 2 2
10 9 6 7 8 3 2 1 4 5
n = 10 
x = 2 
y = 2  
ans = 6 or 3

10 2 3
10 9 6 7 8 3 2 1 4 5
n = 10 
x = 2 
y= 3 
ans = 1 or 8 

5 5 5
100000 10000 1000 100 10
n = 5  
x = 5 
y = 5 
ans = 10 or 5 






*/

/*
n 
x 
y 
a1,a2....,an 

for each i: 
    - see x units before 
    - see y units after 
    - see both the flags and then decide 

tc: 10^5



*/

#include<bits/stdc++.h>
using namespace std; 

int main(){
    long long n, x, y; 
    cin>>n>>x>>y; 

    vector<long long> rain(n,0); 
    for (long long i=0;i<n;i++){
        long long value; 
        cin>>value;
        rain[i] = value;
    }

    for (long long i=0;i<n;i++){ 
        bool leftflag = true; 
        bool rightflag = true;
        for (long long left=1;left<=x;left++){
            if (i-left>=0){
            if (rain[i-left]<rain[i]){
                leftflag = false;
            }
            }
        }
        for (long long right=1;right<=y;right++){
            if (i+right<=n-1){
            if (rain[i+right]<rain[i]){
                rightflag = false;
            }
            }
        }
        if (leftflag && rightflag){
            cout << i+1 << endl; 
            return 0;
        }
    }
    return 0;
}