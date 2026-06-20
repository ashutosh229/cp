#include<iostream>
#include<set>
using namespace std;

int main(){
  string str;
  cin >> str;
  set<char> st;
  int n = str.length();
  for (int i = 0; i <= n - 1;i++){
    char character = str[i];
    st.insert(character);
  }
  int sizest = st.size();
  if(sizest%2==0)
  cout<<"CHAT WITH HER!"<<endl;
  else
    cout << "IGNORE HIM!" << endl;
  return 0;
}