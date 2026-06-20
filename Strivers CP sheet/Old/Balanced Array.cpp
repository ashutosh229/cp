#include<iostream>
#include<vector>
using namespace std;

int main(){
  int t;
  cin>>t;
  for (int test = 1; test <= t;test++){
     int n;
     cin >> n;
     int part = n / 2;
     if(part%2==1){
       cout << "NO" << endl;
     }
     else{
       int half = n/2;
       int quad = n / 4;
       vector<int> even;
       vector<int> odd;
       for (int i = 1; i <= quad;i++){
         int even_term = 2 * i;
         int odd_term = 2 * (i - 1) + 1;
         even.push_back(even_term);
         odd.push_back(odd_term);
       }
       for (int i = quad+1; i <= half ;i++){
        even.push_back(2*i);
        odd.push_back(2 * i + 1);
       }
       even.insert(even.end(), odd.begin(), odd.end());
       cout<<"YES"<<endl;
       for(auto value:even){
         cout << value << " ";
       }
       cout << endl;
  }
}
    return 0;

}