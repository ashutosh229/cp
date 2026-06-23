/*
00 
01 
02 
03 

00 
01 
02 
03 
09 

*/

/*

11:40
12:22

11  
40

12
22

60
-18

42

21

h = 0 
m = 21 

11:61
12:01

0
1

23
59

23*60
58







*/

#include<bits/stdc++.h>
using namespace std; 

int main(){
    string start; 
    cin>>start; 
    long long starthour = stoi(start.substr(0,2));
    long long startmin = stoi(start.substr(3,2));

    string end; 
    cin>>end; 
    long long endhour = stoi(end.substr(0,2)); 
    long long endmin = stoi(end.substr(3,2)); 

    long long hourdiff = (endhour - starthour)*60;  
    long long mindiff = (endmin - startmin); 
    long long totaldiff = hourdiff + mindiff; 
    long long middiff = totaldiff/2; 

    long long houradd = middiff/60; 
    long long minadd = middiff%60;  

    long long midhour = starthour+houradd; 
    long long midmin = startmin+minadd; 

    if (midmin>=60){
        midmin = midmin%60; 
        midhour = midhour + (midmin/60);
    }

    string anshour; 
    string ansmin; 

    if (midhour/10==0) // single digit  
    {
        anshour = "0"+to_string(midhour);
    }
    else{
        anshour = to_string(midhour);
    }

    if (midmin/10==0){
        ansmin = "0"+to_string(midmin);
    }
    else{
        ansmin = to_string(midmin);
    }

    string ans = anshour + ":" + ansmin;

    cout << ans << endl;
    return 0;
}