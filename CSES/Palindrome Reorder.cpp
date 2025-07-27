  // // // #include<iostream>
  // // // #include<map>
  // // // #include<string>
  // // // #include<algorithm>
  // // // using namespace std;

  // // // int countValuesEqualToOne(const map<char, int>& charMap) {
  // // //     int count = 0;
  // // //     for (auto& pair : charMap) {
  // // //         if (pair.second == 1) {
  // // //             count++;
  // // //         }
  // // //     }
  // // //     return count;
  // // // }

  // // // int main(){
  // // //   string str;
  // // //   cin >> str;
  // // //   int n = str.length();
  // // //   map<char, int> hash;
  // // //   for (int i = 0; i <= n - 1;i++){
  // // //     char letter = str[i];
  // // //     hash[letter]++;
  // // //   }
  // // //   int counts = countValuesEqualToOne(hash);
  // // //   string ans = "";
  // // //   char unique='0';
  // // //   if(counts==0 || counts==1){
  // // //     for(auto pair:hash){
  // // //       char letter = pair.first;
  // // //       int freq = pair.second;
  // // //       if(freq!=1){
  // // //         if(freq%2==0){
  // // //           int num = freq / 2;
  // // //           string extra = "";
  // // //           for (int i = 1; i <= num;i++)
  // // //           extra = extra + letter;
  // // //           ans= ans + extra;
  // // //         }
  // // //         else{
  // // //           cout<<"NO SOLUTION"<<endl;
  // // //           return 0;
  // // //         }
  // // //       }
  // // //       else{
  // // //         unique = letter;
  // // //       }
  // // //     }
  // // //     string ans1 = ans;
  // // //     reverse(ans.begin(), ans.end());
  // // //     if(unique=='0'){
  // // //       ans = ans1 + ans;
  // // //     }
  // // //     else{
  // // //       ans = ans1 + unique + ans;
  // // //     }
  // // //     cout<<ans<<endl;
  // // //   }
  // // //   else{
  // // //     cout << "NO SOLUTION" << endl;
  // // //   }
  // // //   return 0;
  // // // }


  // // #include<iostream>
  // // using namespace std;
  // // #include<string>
  // // #include<algorithm>

  // // bool isPalindrome(string str){
  // //   int n = str.length();
  // //   int start = 0;
  // //   int end = n - 1;
  // //   while(start<=end){
  // //     if(str[start]!=str[end])
  // //       return false;
  // //     start++;
  // //     end--;
  // //   }
  // //   return true;
  // // }

  // // int main(){
  // //   string str;
  // //   cin >> str;
  // //   if(isPalindrome(str)){
  // //     cout << str << endl;
  // //     return 0;
  // //   }
  // //   sort(str.begin(), str.end());
  // //   int n = str.length();
  // //   char letter = str[0];
  // //   int count = 1;
  // //   string one="";
  // //   string two="";
  // //   string unique="";

  // //   for (int i = 1; i <= n;i++){
  // //    if(i==n){
  // //       if(count%2==0){
  // //         int num = count / 2;
  // //         while(num--){
  // //           one = one + letter;
  // //           two = two + letter;
  // //         }
  // //       }
  // //       else{
  // //         int partnum = (count - 1) / 2;
  // //         while(partnum--)
  // //         {
  // //           one = one + letter;
  // //           two = two + letter;
  // //         }
  // //         unique = unique + letter;
  // //       }
  // //    }
  // //    else{
  // //        if(str[i]==letter){
  // //      count++;
  // //    }
  // //    else{
  // //       if(count%2==0){
  // //         int num = count / 2;
  // //         while(num--){
  // //           one = one + letter;
  // //           two = two + letter;
  // //         }
  // //       }
  // //       else{
  // //         int partnum = (count - 1) / 2;
  // //         while(partnum--)
  // //         {
  // //           one = one + letter;
  // //           two = two + letter;
  // //         }
  // //         unique = unique + letter;
  // //       }
  // //       count = 1;
  // //       letter = str[i];
  // //    }
  // //    }
    
  // // }

  // // if(unique.length()>=2){
  // //   cout << "NO SOLUTION" << endl;
  // // }
  // // else{
  // //   reverse(two.begin(), two.end());
  // //   string ans = one + unique + two;
  // //   cout << ans << endl;
  // // }
  // //     return 0;
  // // }


  // #include<iostream>
  // #include<map>
  // #include<algorithm>
  // using namespace std;

  // int main(){
  //   string str;
  //   cin >> str;
  //   int len = str.length();
  //   map<char, int> hash;
  //   string front = "";
  //   string end = "";
  //   string unique = "";
  //   for (int i = 0; i <= len - 1;i++){
  //     char letter = str[i];
  //     hash[letter]++;
  //   }
  //   int size = hash.size();
  //   if(size==1){
  //     cout << str << endl;
  //     return 0;
  //   }
  //   for(auto pair:hash){
  //     char letter = pair.first;
  //     char num = pair.second;
  //     if(num%2==0){
  //       int count = num / 2;
  //       while(count--)
  //       {
  //         front = front + letter;
  //         end = end + letter;
  //       }
  //     }
  //     else{
  //       int count = (num - 1) / 2;
  //       unique = unique + letter;
  //       while(count--)
  //       {
  //         front = front + letter;
  //         end = end + letter;
  //       }
  //     }
  //   }
  //   if(unique.length()>=2){
  //     cout << "NO SOLUTION" << endl;
  //   }
  //   else{
  //     reverse(end.begin(), end.end());
  //     string ans = front + unique + end;
  //     cout << ans << endl;
  //   }

  //     return 0;
  // }


  #include<iostream>
  #include<string>
  #include<algorithm>
  #include<map>
  #include<vector>
  using namespace std;

  int main(){
    string str;
    cin >> str;
    int len = str.length();
    map<char, int> hash;
    for (int i = 0; i <= len - 1;i++){
      hash[str[i]]++;
    }
    int count = 0;
    for(auto pair:hash){
      char num = pair.second;
      if(num%2!=0){
        count++;
      }
    }
    if(count>1){
      cout << "NO SOLUTION" << endl;
    }
    else{
      vector<char> ans(len, '0');
      int left = 0;
      int right = len - 1;
      for(auto pair:hash){
        char letter = pair.first;
        int num = pair.second;
        if(num%2!=0){
          ans[len / 2] = letter;
          hash[letter]--;
          while(hash[letter]!=0){
            ans[left] = letter;
            ans[right] = letter;
            hash[letter] = hash[letter] - 2;
            left++;
            right--;
          }
        }
        else{
          while(hash[letter]!=0){
            ans[left] = letter;
            ans[right] = letter;
            hash[letter] = hash[letter] - 2;
            left++;
            right--;
          }
        }
      }
      string answer(ans.begin(), ans.end());
      cout << answer << endl;
    }
      return 0;
  }