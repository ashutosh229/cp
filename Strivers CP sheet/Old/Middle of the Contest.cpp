// // #include <iostream>
// // #include <string>
// // #include <stdexcept>
// // using namespace std;

// // int main()
// // {
// //   string s1;
// //   cin>>s1;
// //   string s2;
// //   cin >> s2;

// //   int h1 = stoi(s1.substr(0,2));
// //   int m1 = stoi(s1.substr(3,2));
// //   int h2 = stoi(s2.substr(0,2));
// //   int m2 = stoi(s2.substr(3,2));

// //   int hdiff = (h2 - h1)*60;
// //   int mdiff = m2 - m1;
// //   int total = hdiff+mdiff;
// //   int mid = total / 2;
// //   int hourmid = mid/60;
// //   int minmid = (mid % 60);
// //   int finalhour = h1 + hourmid;
// //   int finalmin = m1 + minmid;

// //   string ans = "";
// //   string hour = "" + finalhour;
// //   string dot = ":";
// //   string minute = "" + finalmin;

// //   if(finalhour/10==0)
// //     hour = "0" + finalhour;

// //   if(finalmin/10==0)
// //     minute = "0" + finalmin;

// //   ans = hour + dot + minute;

// //   cout << ans << endl;

// //   return 0;
// // }

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//   string one;
//   cin>>one;
//   string two;
//   cin>>two;

//   string h1 = one.substr(0,2);
//   string m1 = one.substr(3,2);
//   string h2 = two.substr(0,2);
//   string m2 = two.substr(3,2);

//   if(h1==h2){
//     int mini = min(stoi(m1), stoi(m2));
//     int maxi = max(stoi(m1), stoi(m2));
//     int mid = (maxi - mini) / 2;
//     mid = mini + mid;
//     string ans = h1 + ":" + to_string(mid);
//     cout << ans << endl;
//   }
//   else{
//     int mini = min(stoi(m1), stoi(m2));
//     int maxi = max(stoi(m1), stoi(m2));
//     int midmin = maxi-mini;
//     int minih = min(stoi(h1), stoi(h2));
//     int maxih = max(stoi(h1), stoi(h2));
//     int midhour = maxi-mini;
//     int totalmins = midhour*60 + midmin;
//     int totalminsmid = totalmins/2;
//     int hourmid = totalminsmid/60;
//     int minmid = totalminsmid%60;
//     int ans1 = minih + hourmid;
//     int ans2 = mini + minmid;
//     if(ans1/10==0){
//       = "0"+to_string(ans1);
//     }
//     string ans = to_string(ans1) + ":" + to_string(ans2);
//     cout << ans << endl;
//   }
//   return 0;
// }

#include<iostream>
using namespace std;

int main(){
  int h1;
  int m1;
  char c;
  cin >> h1 >> c >> m1;
  int h2;
  int m2;
  cin>>h2>>c>>m2;

  int totalMins = ((h1 * 60) + m1 + (h2 * 60) + m2);
  int midMins = totalMins / 2;
  int hours = midMins / 60;
  int mins = midMins%60;
  if(hours>9 && mins>9){
    cout << hours << ":" << mins;
  }
  else{
    if(hours<10)
      cout << 0;
    cout << hours << ":";
    if(mins<10)
      cout << 0;
    cout << mins << endl;
  }

  return 0;
}