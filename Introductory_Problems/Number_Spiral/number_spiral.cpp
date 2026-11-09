#include <bits/stdc++.h>

using namespace std; 

 int main () {
  ios::sync_with_stdio(0);
  
  long long n;
  long long y;
  long long x;
  cin >> n;

  while(n--){
    cin >> y >> x;

    if(x >= y){
      if (x %2 != 0) {
        cout << x * x -y + 1 << endl; 
      }else {
        cout << (x - 1) * (x - 1) + y << endl; 
      }
    }else {
      if (y %2 == 0) {
        cout << y * y - x + 1 << endl;
      }else {
        cout << (y - 1) * (y - 1) + x << endl; 
      } 
    }
  }

  return 0;
 } 
