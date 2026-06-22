/**/
/**/
/*
97 - 32 = 65
*/

#include<bits/stdc++.h>
using namespace std; 

char capitalizer(char ch){
    if ((int)ch>=65 && (int)ch<(65+26)){
        return ch;
    }
    else{
        return (char)((int)ch - 32);
    }
}
int main(){
    string s; 
    cin>>s;
    cout << capitalizer(s[0])+s.substr(1,s.size()-1)<<endl;
    return 0;
}