/*
n = no of rows 
m = no of cols
1,1 notation 



*/

/*
even = full 
odd = ....#(left=false) or #...(left=true)

this 


*/

#include <bits/stdc++.h>
using namespace std;  

int main(){
    long n,m; 
    cin>>n>>m;

    bool left = false;
    for (int i=0;i<n;i++){
        if (!(i%2)){
            for (int j=1;j<=m;j++){
                cout<<"#";
            }
            cout<<endl;
        }
        else{
            if (left){
                cout<<"#";
                for (int j=1;j<=m-1;j++){
                    cout<<".";
                }
                cout<<endl;
            }
            else{
                for (int j=1;j<=m-1;j++){
                    cout<<".";
                }
                cout<<"#";
                cout<<endl;
            }

            left = !left;
        }
    }



    return 0;
}
