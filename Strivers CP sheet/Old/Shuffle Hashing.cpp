#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool checkInclusion(std::string s1, std::string s2) {
    int n1 = s1.length();
    int n2 = s2.length();
    
    if (n1 > n2) return false;

    // Frequency count of characters in s1
    std::vector<int> count1(26, 0);
    for (char c : s1) {
        count1[c - 'a']++;
    }

    // Frequency count of first window in s2
    std::vector<int> count2(26, 0);
    for (int i = 0; i < n1; ++i) {
        count2[s2[i] - 'a']++;
    }

    // Check if the first window matches
    if (count1 == count2) return true;

    // Sliding window over s2
    for (int i = n1; i < n2; ++i) {
        count2[s2[i] - 'a']++;
        count2[s2[i - n1] - 'a']--;

        if (count1 == count2) return true;
    }

    return false;
}

int main(){
  int t;
  cin >> t;
  for (int test = 1; test <= t;test++){
    string p;
    cin >> p;
    string h;
    cin >> h;
    
    if(checkInclusion(p,h))
      cout << "YES" << endl;
      else
        cout << "NO" << endl;
  }
    return 0;

}