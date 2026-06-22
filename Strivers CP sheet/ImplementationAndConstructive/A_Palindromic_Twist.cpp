/*
case 1: left se right banana
case 2: right se left banana
case 3: check if both can be made some other
    - case 3.1: left->left = right->left 
    - case 3.2: left->left = right->right  
    - case 3.3: left->right = right->left  
    - case 3.4: left->right = right->right


*/


#include<bits/stdc++.h>
using namespace std; 

int main(){
    long long t; 
    cin>>t; 
    while(t--){
        long long n; 
        cin>>n; 

        string str; 
        cin>>str; 

        long long ptr1 = 0; 
        long long ptr2 = n-1; 
        bool flag = false;
        while(ptr1<ptr2){
            char option1left = (char)(str[ptr1]-1); 
            char option2left = (char)(str[ptr1]+1);
            char option1right = (char)(str[ptr2]-1); 
            char option2right = (char)(str[ptr2]+1); 

            if (str[ptr1]=='a'){
                option1left = '0';
            }
            if (str[ptr2]=='a'){
                option1left = '0';
            }
            if (str[ptr1]=='z'){
                option2left = '0';
            }
            if (str[ptr2]=='z'){
                option2right = '0';
            }

            if ((str[ptr1]==str[ptr2]) || (str[ptr2]==option1left || str[ptr2]==option2left) || (str[ptr1]==option1right || str[ptr1]==option2right) || (option1left == option1right || option1left == option2right || option2left == option1right || option2left == option2right)){
                ptr1++;
                ptr2--; 
                continue;
            }else{
                cout << "NO" << endl;
                flag = true;
                break;
            }
        }
        if (flag){
            continue;
        }

        cout << "YES" << endl;
    }
    return 0;
}