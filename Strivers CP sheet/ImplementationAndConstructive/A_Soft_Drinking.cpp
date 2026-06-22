/*
n friends  

k bottles of soft drink  
l ml of drink in each bottle -> kl

c limes 
each lime into d slices -> cd 

p grams of salt 

toast -> nl,1,np

max number of toasts 

they all should drink the same amount 


how many toasts can each friend make ? 



5 

1000 
19 
90 

4 
1
3  

250
19
30 

19 

19/5 = 3 
19%5=4 

10 

1000000 
575
1 

50
1
1  

20000  
575 
1  

1 



















*/

#include<bits/stdc++.h>
using namespace std;  

int main(){
    long n, k, l, c, d, p, nl, np; 
    cin>>n>>k>>l>>c>>d>>p>>nl>>np; 
    
    long people = n; 

    long drink = k*l;
    long lime = c*d;
    long salt = p; 
    
    long oneDrink = nl; 
    long oneLime = 1; 
    long oneSalt = np; 

    long maxToasts = min(drink/oneDrink, min(lime/oneLime, salt/oneSalt)); 
    long maxToastsConditioned = maxToasts/n; 

    cout << maxToastsConditioned<<endl;

}