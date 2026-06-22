/*
summands can be 1,2,3
summands in any order

need to rearrange the numbers such that they are in sorted order
*/

/*
3,2,1
1+2+3
1,2,3   

1,1,3,1,3
1,1,1,3,3

2
2

*/

/**/

#include<bits/stdc++.h>
using namespace std; 

int main(){
    string s; 
    cin>>s; 

    priority_queue<int,vector<int>, greater<int>> q; 
    for (int i=0; i<(int)s.size(); i++){
        if (s[i]=='+')
        continue; 

        q.push((int)(s[i]-'0'));
    }

    string ans = "";
    while(!q.empty()){
        ans.push_back(q.top() + '0'); 
        ans.push_back('+');
        q.pop();
    }

    cout << ans.substr(0,ans.size()-1) << endl;





    return 0;
}