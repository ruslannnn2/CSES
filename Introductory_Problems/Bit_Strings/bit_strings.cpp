//no way this is a problem
#include <bits/stdc++.h>
using namespace std; 

 int main () {
  ios::sync_with_stdio(0);
  long long n;
  cin >> n;
  long long res = 1;
  long long mod = 1e9 + 7;

  while(n--){
    res = (res * 2) % mod; 
  }

  cout << res << endl;
 } 

