/*
string str 

to be ordered such that no 2 adjacent characters are the same and lexicographically shortest string   





*/

/*
input: 
1 - string str : len=n=[1,10pow6],str[i]=[A,Z] 

algo: 
- store the string in hash  
- keep firstpos to track first available position
- iterate the hash: 
    - ch and freq  
    - place ch alternate starting from firstpos, freq number of times 
    - update firstpos
- check if the string is fine: if yes, then print, and if not, then not possible

tc:nlogk
sc:k

output: 
1 - if not possible, then -1, if possible, then ans string

*/

/*
HATTIVATTI
n = 10

A - 2 
H - 1
I - 2 
T - 4
V - 1

pos = 0>1>3>4
0 1 2 3 4 5 6 7 8 9
A H A I T I T   T




*/

#include<bits/stdc++.h>
using namespace std; 

int main(){
    string str; 
    cin>>str; 

    long long n = str.size(); 

    map<char,long long> hash;
    for (auto& ch:str){
        hash[ch]++;
    }

    long long firstPos = 0; 

    for (auto& p:hash){
        char ch = p.first; 
        long long freq = p.second; 
        // 0 - 2 - 4 - 6
        // first position update rule
        while(freq--){
            if (firstPos<n){
                str[firstPos] = ch; 
            }
            else{
                cout << -1 << endl;
                return 0;
            }
            firstPos = firstPos+2;
        }
    }


    return 0;
}