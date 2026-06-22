/*


*/

/*




a - 4 
b - 2  
c - 1

z - 1
y - 1
x - 1 
k - 1 
j - 1 
h - 1 

a - 4 
b - 2 
c - 1







*/

/**/

#include<bits/stdc++.h>
using namespace std; 

int main(){
    long long t;
    cin>>t; 
    while(t--){
        string p; 
        cin>>p; 

        string h; 
        cin>>h; 

        unordered_map<char,long long> hashp; 
        unordered_map<char,long long> hashh;

        for (auto& ch: p){
            hashp[ch]++;
        }

        for (auto& ch: h){
            hashh[ch]++;
        }

        bool flag = false;
        for (auto& info:hashp){
            char ch = info.first;
            long long freq = info.second; 
            if (hashh.find(ch)==hashh.end() || hashh[ch]<freq)
            {
                cout << "NO" << endl; 
                flag = true;
                break; 
            }
        }

        if (flag){
            continue;
        }

        cout << "YES" << endl;
    }

    return 0;
}