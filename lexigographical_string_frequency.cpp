#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    map<string,int> hash;
    while(n--){
        string str;
        cin>>str;
        hash[str]++;
    }
    for (auto &p: hash){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}