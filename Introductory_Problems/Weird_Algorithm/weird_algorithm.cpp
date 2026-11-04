#include <bits/stdc++.h>
#include <string>

using namespace std; 

 int main () {
  ios::sync_with_stdio(0);

  long long n;
  cin >> n;

  while(n != 1){
    cout << to_string(n) + " ";
    if (n %2 != 0){
      n = (n*3) + 1;
    }
    else{
      n /= 2;
    }
  }
  cout << "1" ;
 } 
