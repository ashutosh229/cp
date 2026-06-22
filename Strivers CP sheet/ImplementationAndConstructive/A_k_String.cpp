/**/

/**/

/*
3
aazz 

s=aabxd  
s=aabxd
s=aabxd

a-kn1 
b-kn2 
x-kn3  
d-kn4

agar aisa hain toh thik warna -1 
ab rearrange kaise karenge,
1 se k  
ans = ans + s

find s:
n1 = hash[a]/k 
n2 = hash[b]/k   





*/

#include<bits/stdc++.h>
using namespace std; 

int main(){
    long long k; 
    cin>>k; 

    string s; 
    cin>>s; 

    unordered_map<char,long long> hash; 
    for (auto& ch:s){
        hash[ch]++;
    }

    for (auto& p:hash){
        char ch = p.first;
        long long freq = p.second;  
        if (freq%k!=0){
            cout << -1 << endl;
            return 0;
        }
    }

    string component = ""; 
    for (auto& p: hash){
        char ch = p.first; 
        long long freq = p.second; 
        long long occ = freq/k;
        string bundle = ""; 
        for (long long i=1;i<=occ;i++){
            bundle = bundle + ch;
        }
        component = component + bundle;
    }

    string ans = ""; 
    for (long long i=1;i<=k;i++){
        ans = ans + component;
    }

    cout << ans << endl;

    return 0;
}