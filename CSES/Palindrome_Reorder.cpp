/*
string given 

needs to order the letters in such a way that it becomes a palindrome  



*/

/*
input: 
1 - string str : len=n=[1,10pow6],str[i]=[A,Z] 

algo:
- store the string in the hash 
- check the number of odd characters:
    - if >1, then no 
    - otherwise yes 
- if yes, then string finding
- iterate over hashmap to construct string: 
    - if odd: 
        - find center: center = n/2
        - insert one in center 
        - others right and left of center
    - if even: 
        - insert half through ptr1 and half through ptr2

tc: n
sc: n

output: 
- print palindrome if exists and if not then "NO SOLUTION"
*/

/*

A-6
C-2
B-1

AAACBCAAA

*/

#include<bits/stdc++.h>
using namespace std; 

int main(){
    string str;
    cin>>str; 

    long long n = str.size(); 

    unordered_map<char,long long> hash; 
    for (auto& ch:str){
        hash[ch]++;
    }

    long long oddCount = 0;
    for (auto& p:hash){
        char ch = p.first; 
        long long freq = p.second; 
        if (freq%2){
            oddCount++; 
            if (oddCount>1){
                cout << "NO SOLUTION" << endl;
                return 0;
            }
        }
    }

    long long ptr1 = 0; 
    long long ptr2 = n-1;
    for (auto& p:hash){
        char ch = p.first; 
        long long freq = p.second; 
        if (freq%2){
            long long center = n/2;
            str[center] = ch; 
            long long rest = (freq-1)/2;
            for (long long i=1;i<=rest;i++){
                str[center-i] = ch;
                str[center+i] = ch;
            }
        }
        else{
            long long rest = freq/2; 
            for (long long i=1;i<=rest;i++){
                str[ptr1]=ch; 
                str[ptr2]=ch; 
                ptr1++; 
                ptr2--;
            }
        }
    }

    cout << str << endl;
    return 0;
}