#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;

bool isUpperCase(const std::string& word) {
    return std::all_of(word.begin(), word.end(), [](unsigned char c) {
        return std::isupper(c);
    });
}

bool isRuleApply(string word,int& flag){
  if(isUpperCase(word))
  {
     flag = 1;
     return true;
  }
    
  
  int len = word.length();
  if(len==1){
    if(isupper(word[0]))
      return false;
    else
    {
      flag = 2;
      return true;
    }
      
  }
  else{
    std::string restOfWord = word.substr(1);
    char first = word[0];
    if(islower(word[0]) && isUpperCase(restOfWord))
    {
      flag = 2;
       return true;
    }
     
    else
      return false;
  }
}
int main(){
  string word;
  cin >> word;
  int flag = -1;
  int len = word.length();
  if(isRuleApply(word,flag)){
     if(flag==1){
      std::transform(word.begin(), word.end(), word.begin(),
                   [](unsigned char c) { return std::tolower(c); });
     }
     else{
      char ch = word[0];
      char upperCh = std::toupper(static_cast<unsigned char>(ch));
      std::string restOfWord = word.substr(1);
      std::transform(restOfWord.begin(), restOfWord.end(), restOfWord.begin(),
                   [](unsigned char c) { return std::tolower(c); });
      word = upperCh + restOfWord;
     }
  }
  cout << word;
  return 0;
}