/*


*/

/*
if (word==fine), then leave as it is 
if (word==follows both conditions), then change it

c1 = uuuuuuu
c2 = suuuuuu

usssss 
ssssss


*/


#include<bits/stdc++.h>
using namespace std; 

char inverter(char ch){
    if (ch>=65 && ch<(65+26)){ // big->small
            return (char)(ch+(97-65));
    }else{ // small->big 97 - (97-65)
            return (char)(ch-(97-65));
    }
}

int main(){
    string str; 
    cin>>str; 

    if (str.size()==1){
        cout << inverter(str[0]) << endl; 
        return 0;
    }

    for(long long i=1;i<(long long)(str.size());i++){
        if (str[i]>=97 && str[i]<(97+26)){
            cout << str << endl; 
            return 0;
        }
    }

    for (long long i=0;i<(long long)(str.size());i++){
        str[i] = inverter(str[i]);
    }

    cout << str << endl;

    return 0;
}