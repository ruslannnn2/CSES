#include <bits/stdc++.h>
#include <string>

using namespace std; 

 int main () {
  ios::sync_with_stdio(0);
  
  string s;
  cin >> s;
  long long n = s.length();

  long long max = 1;
  long long curr = 1;
  char c = s[0];

  for (int i = 1; i < n; i++){
    if (s[i] == c){
      ++curr;
    }else{
      c = s[i];
      curr = 1;
    }
    max = (curr > max) ? curr : max;
  }
   
  cout << max << endl;

  return 0;
 } 
