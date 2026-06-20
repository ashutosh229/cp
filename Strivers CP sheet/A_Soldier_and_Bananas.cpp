/*
w 

1 - k 
2 - 2k 
3 - 3k 
...
w - wk 

need = (w(w+1)/2)k - n
*/

/*
3 17 4
k n w 

30 - 17 = 13

1 2 1
k n w 

1 - 2
*/

/**/

#include <bits/stdc++.h>
using namespace std; 

int main(){
    long long k,n,w; 
    cin>>k>>n>>w;
    long long total = (((w*(w+1))/2)*k);
    if (n<=total){
        cout << total - n << endl;
    }else{
        // n = 3, total = 2
        cout << 0 << endl;
    }

    return 0;
}