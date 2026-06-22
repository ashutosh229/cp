/*
given: card on the table, 5 cards in your hand

goal: to check if at least one card can be played
*/

/*
AS
2H 4C TH JH AD
yes 

2H
3D 4C AC KD AS
no 

4D
AS AC AD AH 5H
yes


*/

/*
condition: if there exists a card in the hand, which has the same rank or same suit as the card in the table 


*/

#include<bits/stdc++.h>
using namespace std; 

int main(){
    string table; 
    cin>>table;
    char tablerank = table[0]; 
    char tablesuit = table[1]; 
    int cards = 5;
    while(cards--){
        string hand; 
        cin>>hand; 
        char handrank = hand[0];
        char handsuit = hand[1];
        if (handrank==tablerank || tablesuit==handsuit){
            cout << "yes" << endl; 
            return 0;
        }
    }

    cout << "no" << endl;
    return 0;
}