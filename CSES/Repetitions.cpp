/*
string  - A, C, G, T 

goal: 
- find the maximum length substring containing only one character
- print the length


*/


/**/

/*
input:
string s of n character 
where n = [1,10pow6]

output: 
an integer denoting the length 

*/

#include<bits/stdc++.h>
using namespace std; 

bool information(unordered_map<char,long long>& hash){
    if (hash.size()==1){
        return true;
    }
    return false;
}

int main(){
    string str; 
    cin>>str; 

    long long n = str.size(); 

    unordered_map<char,long long> hash;
    long long low = 0; 
    long long high = 0; 
    long long len = 0;
    long long maxlength = INT_MIN;
    for (high=0;high<n;high++){
        hash[str[high]]++; 
        while(!information(hash)){
            hash[str[low]]--; 
            if (hash[str[low]]==0){
                hash.erase(str[low]);
            }
            low++;
        }
        if (information(hash)){
            len = high-low+1; 
            maxlength = max(maxlength,len);
        }
    }

    cout << maxlength << endl;
    
    return 0;
}



