/*
number of distinct characters in the name == odd, then male 
number of distinct characters in the name == even, then female 


*/

/**/

/**/

#include <bits/stdc++.h>
using namespace std; 

int main(){
    string s; 
    cin>>s; 
    // non empty 
    // only lowercase english letters 
    // atmost 100 characters 

    unordered_map<char,int> hash; 
    for (auto& ch: s){
        hash[ch]++;
    }

    if (hash.size()%2){
        cout<< "IGNORE HIM!" << endl;
    }
    else{
        cout << "CHAT WITH HER!" << endl;
    }






    return 0;
}