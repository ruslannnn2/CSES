#include <bits/stdc++.h>
#include <iostream>

using namespace std; 

 int main () {
  ios::sync_with_stdio(0);
  
  long long n;
  long long a;
  long long b;
  cin >> n;

  while(n--){
   cin >> a >> b; 

   //if either a or b is the max then we need to make sure 
   //that the min is greater than or equal to the max (a or b)
   //when multiplied by two. This makes sure cases like 0 3 don't pass
   if ((a + b) % 3 == 0 && max(a, b) <= 2 * min(a, b)) {
     cout << "YES" << endl;
   } else {
     cout << "NO" << endl;
   }
  }


  return 0;
 } 
