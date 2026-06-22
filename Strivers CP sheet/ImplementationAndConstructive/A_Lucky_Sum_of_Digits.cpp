/*
11 
- 1 
- 4 
- 1
- 0
1-1
4
1-1
7

47

10
- 1
- 3
- 0 
- 3

-1

*/


#include<bits/stdc++.h>
using namespace std; 

int main(){
    long long n; 
    cin>>n; 

    long long numofseven = n/7; 
    long long nextdivisor = n%7; 
    long long numoffour = nextdivisor/4;
    long long flag = nextdivisor%4; 
    if (flag!=0){
        cout << -1 << endl; 
        return 0;
    }
    string ans = ""; 
    for (long long i=1;i<=numoffour;i++){
        ans.push_back('4');
    }
    for (long long i=1;i<=numofseven;i++){
        ans.push_back('7');
    }
    cout << ans << endl;
    return 0;
}