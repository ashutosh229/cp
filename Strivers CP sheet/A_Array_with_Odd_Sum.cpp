/*
n integers array 

move: 
    - choose any two different indices 
    - replace one with other

number of moves can be 0 i.e. case when condition is initially satisfied

goal: 
- to obtain array with odd sum

*/

/*
2 3
sum = 5 
yes

3 3 3
sum = 9 
yes

2 2 8 8
sum = 20



abs(a1-a2)=k 
either k forward or k backward

sigma(n2)-sigma(n)/2 





5 5 5 5 
sum = 20 

1 1 1 1
sum = 4

*/

/*
find sum 
if sum is odd, then yes 
if sum is even, then:
    - generate all pairs 
    - find if the diff between them is odd 
    - if odd, then yes
    - otherwise not possible


agar ek bhi odd diff encounter hogaya toh thik hain, kar saktein hain  
agar ek bhi nahi huya toh, e e e e 
e -> e -> e -> e -> e 



*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t; 
    cin>>t; 
    while(t--){
        bool flag = false;
        long long n;
        cin>>n; 

        vector<long long> nums(n,0);
        long long total = 0;
        for (long long i=0;i<n;i++){
            long long value; 
            cin>>value;
            total = total + value;
            nums[i] = value;
        }

        if (total%2){
            cout << "YES" << endl;
            continue;
        }

        for (long long i=0;i<n;i++){
            for (long long j=i+1;j<n;j++){
                long long diff = abs(nums[i]-nums[j]);
                if (diff%2){
                    cout << "YES" << endl; 
                    flag = true;
                    break;
                }
            }
            if (flag){
                break;
            }
        }

        if (flag)
        continue;

        cout << "NO" << endl;
    }
    return 0;
}



