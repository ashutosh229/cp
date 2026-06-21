/*
1 to 10000'

1,11,111,1111 - 10
2,22,222,2222 - 10
3,33,333,3333 - 10
4,44,444,4444 - 10
......
9,99,999,9999 - 10





*/

/*
22
2
2
10+3 = 13 

9999
9
4 
80+10=90

1
1
1
0+1=1

777
7 
3 
60+6=66
*/

/*
find the digit x%10 
find the position (int)log10(abs(n)) + 1;

(digit-1)*10
pos =1 -> ans +1 
pos=2 -> ans + 3 
pos=3 -> ans+6
pos=4 -> ans+10

1 - 0 
10 - 1
100 - 2 




*/

#include<bits/stdc++.h> 
using namespace std; 

int main(){
    long long t; 
    cin>>t; 
    while (t--){
        long long x; 
        cin>>x; 
        long long digit = x%10; 
        long long pos = floor(log10(x)) + 1; 
        long long ans = (digit-1)*10;

        if (pos==1)
        ans = ans + 1; 
        else if (pos=2)
        ans = ans + 3; 
        else if (pos=3)
        ans = ans + 6; 
        else 
        ans = ans + 10;

        cout << ans << endl;
    }

    return 0;
}