/*
5 6
4 3 1 1 2 
n = 5  
k = 6 


1,2
[2]
ans = 1
k=6-1=5

1,3 
[2,3]
ans = 1+1=2
k=5-1=4

2,4
[2,3,4]
ans = 2+1=3 
k=4-2=2

3,1


din hain = 7 
din chahiye = 10



















*/


#include<bits/stdc++.h>
using namespace std; 

struct cmp{
    bool operator()(const pair<long long, long long>& a, const pair<long long, long long>& b){ 
        return (a.first>b.first);
    }
};

int main(){
    long long n,k; 
    cin>>n>>k; 

    priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, cmp> q;
    for (long long i=1;i<=n;i++){
        long long days; 
        cin>>days; 

        q.push({days,i-1});
    }

    long long ans = 0;
    vector<long long> indices; 
    while(!q.empty()){
        long long minDays = q.top().first;
        long long index = q.top().second; 

        if (k>=minDays){
            k = k-minDays;
            ans = ans + 1;
            indices.push_back(index);
        }

        q.pop();
    }

    cout << ans << endl; 
    for (auto& val: indices){
        cout << val+1 << " ";
    }

    return 0;
}