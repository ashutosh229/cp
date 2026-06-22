/*


t - long   
1: 
n - long
2
3




t
*/

/*
round: 
d00000 

1 8 8000  
101 117 1107 

5009 
/5 - 5*1000 + 9
/9 - 9*1 + 0

7 
/7 - 7*1 + 0 

9876 
/9 - 9000 + 876
/8 - 800 + 76 
/7 - 70 + 6 
/6 - 6 + 0

10000
/1 - 10000
*/

#include<bits/stdc++.h>
using namespace std; 

int main(){
    long t; 
    cin>>t; 

    while (t--){
        string n; 
        cin>>n; 

        vector<long> result;
        string temp = n;
        while(temp!="0"){
            long firstCh = n[0]-'0'; 
            long num = stoi(temp);
            long rem = (num%firstCh);  
            long ans =  num - rem; 
            result.push_back(ans);
            temp = to_string(rem);
        }

        long len = result.size(); 
        cout<<len<<endl; 
        for (auto& ans: result){
            cout << ans << " ";
        }

        cout << endl;

    }


    return 0;
}




