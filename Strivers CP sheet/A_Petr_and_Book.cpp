#include<bits/stdc++.h>
using namespace std; 

int main(){
    long long n; 
    cin>>n;  // 1000
    
    long long days = 7; 
    long long total = 0;
    vector<long long> pages(days,0);
    for (long long day=1;day<=days;day++){
        long long page; // 0
        cin>>page; // 0
        pages[day-1] = page; // 0
        total = total + page;
    }

    long long left = n%total; 
    long long current = 0; 

    // case 1: not divisible i.e. 120%25 = 20 
    // ek week mein 20 padhne hain
    // case 2: divisible hain i.e. 120%2=0  
    // 0 0 1 1 0 0 0 
    long long need = (left==0)?(total):(left);

    for (long long day=1;day<=days;day++){
        long long page = pages[day-1];
        current = current + page; 
        if (current>=need){
            cout << day << endl; 
            return 0;
        }
    }

    return 0;
}