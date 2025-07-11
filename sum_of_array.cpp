#include<bits/stdc++.h>
using namespace std;

int sum(int arr[], int index){
    if (index<0) return 0;
    return sum(arr,index-1)+arr[index];
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
}