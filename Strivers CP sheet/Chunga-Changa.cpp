
// #include<iostream>
// using namespace std;

// int main(){
//   // one coco price = z
//   // shasha = x
//   //masha = y
//   //1st case: using only personal money i.e. can be 0 or positive 
//   //2nd case: using mixup of money 
//   //number of coco in the 2nd case may be less or more than the number of coco in the 1st case 
  
//   //considering the 1st case and all the cases in the 2nd case, both of them want to buy the max number of coco as they can 
//   //minimize the number of exchange in case of max coco number 
//   //donor and acceptor doesnot matter here

//   int x;
//   int y;
//   int z;
//   int maxi = 0;
//   int mini = 0;
//   int exchange = 0;
//   int case1 = x / z + y / z;
//   int case2 = (x+y)/z;
//   if (case2>case1){
    
//   }

//   return 0;
// }

#include<iostream>
using namespace std;

int main(){
  long long x,y,z;
  cin >> x >> y >> z;
  long long case1 = x / z + y / z;
  long long case2 = (x+y)/z;
  if(case1>=case2){
    cout << case1 << " " << 0 << endl;
  }
  else{
    long long ans2=1;
    long long p1 = x;
    long long p2 = y;
    while(p1!=0){
      p1 = p1 - 1;
      p2 = p2 + 1;
      if((p1/z + p2/z)==case2){
        ans2 = min(ans2, (x - p1));
      }
    }
    cout << case2 << " " << ans2 << endl;
  }
  
  return 0;
}