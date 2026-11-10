//You need to make the observation that any consecutive four numbers can be split 
//into two equal value sets. Like 6,7,8,9 first set is the two outer nums second set
//is the two inner ones. So if the sum is divisible by four then yes it exists,
//also if there is a remainder of three nums then that also means the n works.
// so with the case of n = 7, 7 divided by four has a remainder of three so that means 
// we can make two sets. we use the rule of fours in 1,2,3,4,5,6,7 so pick the last four digits
// and go back. 4,5,6,7 can be split into 4,7 and 5,6. so far so good. then the remaining 1,2,3 
// always splits by first two nums to one set then the remaining number to the last. so the sets
// end up being 4,7,1,2 and 5,6,3.
// sorry for bad explanation.

#include <bits/stdc++.h>
#include <vector>

using namespace std; 

 int main () {
  ios::sync_with_stdio(0);

  long long n;
  cin >> n;
  vector<long long> set1;
  vector<long long> set2;
  int count = 1;

  if (n % 4 != 0 && n % 4 != 3 )
    cout << "NO" <<endl;
  else {
    if (n % 4 == 3) {
      set1.push_back(1);
      set1.push_back(2);
      set2.push_back(3);
    }

    //if div by 4 then start at n =1 if not, we alr have 1,2,3 placed so 
    //start at n = 4. this is so bad.
    for (long long i = (n % 4 == 3 ? 4 : 1); i <= n; i++) {
      if(count == 1){
        set1.push_back(i);
        count++;
      }else if (count == 4) {
        set1.push_back(i);
        count = 1;
      }else {
        set2.push_back(i);
        count++;
      }
    }

    //there is def a better way to do this. my apologies
    cout << "YES" << endl;
    cout << set1.size() << endl;
    for (long long n : set1) {
      cout << n << " ";
    }
    cout << endl;
    cout << set2.size() << endl;
    for (long long n : set2) {
      cout << n << " ";
    }
    cout << endl;
  }
 } 
