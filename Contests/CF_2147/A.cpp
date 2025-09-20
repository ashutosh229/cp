#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int x;
        int y;
        cin >> x >> y;
        int ans = -1;
        if (y > x) {
            ans = 2;
        } 
        else if (y >= 2 && x - y >= 2) {
            ans = 3;
        } 
        cout<<ans<<endl;
    }
    return 0;
}