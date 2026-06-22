#include<bits/stdc++.h>
using namespace std; 
 
bool information(unordered_map<char,long long>& hash, long long low, long long high){
    long long len = high-low+1; 
    for (auto& p:hash){
        char ch = p.first;
        long long freq = p.second; 
        if (freq>len/2){
            return false;
        }
    }
    return true;
}

int main(){
    long long n; 
    cin>>n; 

    string str; 
    cin>>str; 

    unordered_map<char,long long> hash;
    long long low = 0; 
    long long high = 0; 
    for (high=0;high<n;high++){
        hash[str[high]]++; 
        while(!information(hash,low,high)){
            hash[str[low]]--; 
            if (hash[str[low]]==0){
                hash.erase(str[low]);
            }
            low++; 
        }
        if (information(hash,low,high)){
            cout << "YES" << endl;
            cout << str.substr(low,high-low+1) << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}