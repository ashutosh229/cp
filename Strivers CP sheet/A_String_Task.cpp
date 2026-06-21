#include<bits/stdc++.h>
using namespace std; 

char lowerize(char ch){
    // 65 - big 
    // 97 - small 
    // 65 -> 97
    // ch+32

    if ((int)ch>=97 && (int)ch<(97+26))
    return ch; 
    else {
        return (char)((int)ch+32);
    }
}
int main(){
    string s; 
    cin>>s; 

    // deleting all vowels 
    // putting . before consonants  
    // converting all upper to lower consonants  

    string ans = "";
    for (auto& ch: s){
        if (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        continue; 
        else{
            ans.push_back('.'); 
            ans.push_back(lowerize(ch));  
        }
    }

    cout << ans << endl;
    return 0;
}