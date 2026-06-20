// // // #include<iostream>
// // // using namespace std;

// // // int main(){
// // //   int t;
// // //   cin >> t;
// // //   for (int test = 1; test <= t;test++){
// // //     int a; //487
// // //     int k; //1
// // //     cin >> a >> k;
// // //     if(k==1){
// // //       cout << a << endl;
// // //     }
// // //     else{
// // //         int a_prev = a;
// // //     int a_curr = 0;
// // //     for (int i = 2; i <= k;i++){
// // //       int mindigit = INT_MAX;
// // //       int maxdigit = INT_MIN;
// // //         while(a_prev!=0){
// // //       int digit = a_prev % 10;
// // //       mindigit = min(digit, mindigit);
// // //       maxdigit = max(digit, maxdigit);
// // //       a_prev = a_prev / 10;
// // //     }
// // //       int product = mindigit * maxdigit;
// // //       a_curr = a_prev + product;
// // //       a_prev = a_curr;
// // //     }
// // //     cout << a_curr << endl;
// // //     }

// // //   }
// // //     return 0;
// // // }

// // #include <iostream>
// // #include <string>
// // #include <limits>
// // using namespace std;

// // void findMaxMinDigit(const std::string &number, int &maxDigit, int &minDigit) {
// //     maxDigit = std::numeric_limits<int>::min();
// //     minDigit = std::numeric_limits<int>::max();

// //     for (char ch : number) {
// //         if (std::isdigit(ch)) {
// //             int digit = ch - '0';
// //             if (digit > maxDigit) {
// //                 maxDigit = digit;
// //             }
// //             if (digit < minDigit) {
// //                 minDigit = digit;
// //             }
// //         }
// //     }
// // }

// // void remove(string &number) {
// //     while (!number.empty() && number.back() == '0') {
// //         number.pop_back();
// //     }
// // }

// // int main(){
// //   int t;
// //   cin >> t;
// //   for (int test = 1; test <= t;test++){
// //     string a;
// //     int k;
// //     cin >> a >> k;
// //     for (int i = 2;i<=k;i++)
// //       remove(a);
// //     int maxDigit = 0;
// //     int minDigit = 0;
// //     findMaxMinDigit(a, maxDigit, minDigit);
// //     int product = minDigit * maxDigit;

// //   }
// //     return 0;
// // }

// // // #include<iostream>
// // // using namespace std;

// // // int main(){
// // //   int t;
// // //   cin >> t;
// // //   for (int test = 1; test <= t;test++){
// // //     int a; //487
// // //     int k; //1
// // //     cin >> a >> k;
// // //     if(k==1){
// // //       cout << a << endl;
// // //     }
// // //     else{
// // //         int a_prev = a;
// // //     int a_curr = 0;
// // //     for (int i = 2; i <= k;i++){
// // //       int mindigit = INT_MAX;
// // //       int maxdigit = INT_MIN;
// // //         while(a_prev!=0){
// // //       int digit = a_prev % 10;
// // //       mindigit = min(digit, mindigit);
// // //       maxdigit = max(digit, maxdigit);
// // //       a_prev = a_prev / 10;
// // //     }
// // //       int product = mindigit * maxdigit;
// // //       a_curr = a_prev + product;
// // //       a_prev = a_curr;
// // //     }
// // //     cout << a_curr << endl;
// // //     }

// // //   }
// // //     return 0;
// // // }

// // #include <iostream>
// // #include <string>
// // #include <limits>
// // using namespace std;

// // void findMaxMinDigit(const std::string &number, int &maxDigit, int &minDigit) {
// //     maxDigit = std::numeric_limits<int>::min();
// //     minDigit = std::numeric_limits<int>::max();

// //     for (char ch : number) {
// //         if (std::isdigit(ch)) {
// //             int digit = ch - '0';
// //             if (digit > maxDigit) {
// //                 maxDigit = digit;
// //             }
// //             if (digit < minDigit) {
// //                 minDigit = digit;
// //             }
// //         }
// //     }
// // }

// // void remove(string &number) {
// //     while (!number.empty() && number.back() == '0') {
// //         number.pop_back();
// //     }
// // }

// // int main(){
// //   int t;
// //   cin >> t;
// //   for (int test = 1; test <= t;test++){
// //     string a;
// //     int k;
// //     cin >> a >> k;
// //     for (int i = 2;i<=k;i++)
// //       remove(a);
// //     int maxDigit = 0;
// //     int minDigit = 0;
// //     findMaxMinDigit(a, maxDigit, minDigit);
// //     int product = minDigit * maxDigit;

// //   }
// //     return 0;
// // }

// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     int test;
//     cin >> test;
//     while (test--)
//     {
//         long long a;
//         long long k;
//         cin >> a >> k;
//         if (k == 1)
//         {
//             cout << a << endl;
//         }
//         else
//         {
//             long long a_prev = a;
//             string ans;
//             string a_prev_string;
//             for (int i = 2; i <= k; i++)
//             {
//                 a_prev = stoi(ans);
//                 a_prev_string = to_string(a_prev);
//                 sort(a_prev_string.begin(), a_prev_string.end());
//                 int mini = a_prev_string[0] - '0';
//                 int len = a_prev_string.length();
//                 int maxi = a_prev_string[len - 1] - '0';
//                 ans = to_string((mini * maxi) + a_prev);
//             }

//             cout << ans << endl;
//         }
//     }
//     return 0;
// }

#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

// long long func(long long num)
// {
//     int mini = 10;
//     int maxi = -1;
//     while (num != 0)
//     {
//         int digit = num % 10;
//         mini = min(digit, mini);
//         maxi = max(digit, maxi);
//         num = num / 10;
//     }

//     return mini * maxi;
// }

long long func(long long num){
    string numString = to_string(num);
    sort(numString.begin(), numString.end());
    int len = numString.length();
    int mini = numString[0]-'0';
    int maxi = numString[len-1]-'0';

    return maxi * mini;
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long a;
        long long k;
        cin >> a >> k;
        if (k == 1)
        {
            cout << a << endl;
        }
        else
        {
            long long prev = a;
            long long next = 0;
            for (int i = 2; i <= k; i++)
            {
                next = prev + func(prev);
                prev = next;
            }
            cout << next << endl;
        }
    }
    return 0;
}