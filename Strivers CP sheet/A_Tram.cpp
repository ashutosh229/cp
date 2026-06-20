
/*
n = number of stops
1 to n 
at ith stop: 
    exit = ai 
    enter = bi
    net = |ai-bi| 

before first stop, tram is empty => at first stop, only ai and not bi 
at last stop, all passengers exit => at last stop, only bi and not ai

tram's minimum capacity





*/

/*
0 3 - 0,3 - 3  
2 5 - 1,6 - 6 
4 2 - 2,4 - 4  
4 0 - 0,0 - 0   

6




*/

/**/

#include<bits/stdc++.h>
using namespace std; 

int main(){
    long long n; 
    cin>>n; 

    long long ans_prev= 0;
    long long ans = INT_MIN;
    while(n--){
        long long a,b;
        cin>>a>>b; 
        ans_prev = max(ans_prev - a,b+ans_prev - a);
        ans = max(ans,ans_prev);
    }

    cout << ans << endl;

    return 0;
}