#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
  vector<int> input(4, 0);
  for (int i = 0; i <= 3;i++)
    cin >> input[i];

  int maxi = *(std::max_element(input.begin(), input.end()));
  for (int i = 0; i <= 3;i++){
    if(input[i]!=maxi){
      cout << maxi - input[i] << " ";
    }
  }
  
    return 0;
}