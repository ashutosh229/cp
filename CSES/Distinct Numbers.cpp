#include<set>
#include<iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  set<int> st;
  int entry;
  for (int i = 1; i <= n;i++)
  {
    cin>>entry;
    st.insert(entry);
  }
  int x = st.size();

  cout << x << endl;

  return 0;
}

// #include<set>
// #include<iostream>
// using namespace std;

// int main(){
//   int n;
//   set<int> st;
//   int entry;
//   for (int i = 1; i <= n;i++)
//   {
//     cin>>entry;
//     st.insert(entry);
//   }
//   int x = st.size();

//   cout << x << endl;

//   return 0;
// }

