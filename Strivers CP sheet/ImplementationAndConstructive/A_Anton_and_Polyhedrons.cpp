/*

*/

/**/

/**/

#include <bits/stdc++.h>
using namespace std; 

int main(){
    long n;
    cin>>n; 

    unordered_map<string,long> hash; 
    hash["Tetrahedron"] = 4; 
    hash["Cube"] = 6; 
    hash["Octahedron"] = 8; 
    hash["Dodecahedron"] = 12; 
    hash["Icosahedron"] = 20;

    
    long ans = 0;
    for (long i=1;i<=n;i++){
        string s; 
        cin>>s; 
        ans = ans + hash[s];
    }

    cout << ans << endl;


    return 0;
}