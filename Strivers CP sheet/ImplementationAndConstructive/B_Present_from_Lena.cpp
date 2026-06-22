#include<bits/stdc++.h>
using namespace std; 

/*
first 3 lines  
mid line 
last 3 lines

first 3 lines: 
center: 0 to n-1
for each line: 
    print (0 to center-1)
    print(center)
    print(center-1 to 0) 

mid line: 
0 to n-1 
n 
n-1 to 0 


space accomodation: 
max = 2n+1 
n-center number of spaces on one side;





*/

int main(){
    long long n; 
    cin>>n;
    
    // first lines
    for (long long center=0;center<=n-1;center++){
        // left spaces
        long long spaces = n-center;
        while(spaces--){
            cout << " " << " ";
        }
        
        // left edges
        for (long long edge=0;edge<=center-1;edge++){
            cout << edge << " ";
        }

        // center
        cout << center;
        if (center!=0){
            cout << " ";
        } 

        // right edges
        for (long long edge=center-1;edge>=0;edge--){
            cout << edge;
            if (edge!=0){
                cout << " ";
            }
        }

        // right spaces
        // spaces = n-center;
        // while(spaces--){
        //     cout << " " << " ";
        // }

        // shift to next line for next center
        cout << endl;
    }

    // mid line 
    for (long long edge=0;edge<=n-1;edge++){
        cout << edge << " ";
    }
    cout << n << " "; 
    for (long long edge=n-1;edge>=0;edge--){
        cout << edge;
        if (edge!=0){
            cout << " ";
        }
    }
    cout<<endl;

    // last lines 
    for (long long center=n-1;center>=0;center--){
        // left spaces
        long long spaces = n-center; 
        while(spaces--){
            cout << " " << " ";
        }

        // left edges
        for (long long edge=0;edge<=center-1;edge++){
            cout << edge << " ";
        }

        // center
                cout << center;
        if (center!=0){
            cout << " ";
        } 

        // right edges
        for (long long edge=center-1;edge>=0;edge--){
            cout << edge;
            if (edge!=0){
                cout << " ";
            }
        }

        // right spaces 
        // spaces = n-center; 
        // while(spaces--){
        //     cout << " " << " ";
        // }

        // move to next line for next center
        cout << endl;
    }

    return 0;
}