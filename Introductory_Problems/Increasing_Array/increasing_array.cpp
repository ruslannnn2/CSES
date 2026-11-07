#include <bits/stdc++.h>

using namespace std; 

 int main () {
  ios::sync_with_stdio(0);
  
  long long n;
  cin >> n;
  long long prev;
  long long curr;
  long long res = 0;

  for (int i = 0; i < n; i++){
    if (i == 0){
      cin >> prev;
      continue;
    }
    cin >> curr;
    res += (prev - curr > 0) ? prev - curr : 0;
    //only move prev if curr was bigger, otherwise
    //the adjusted element isn't compared to the next curr
    prev = (curr > prev) ?curr : prev;

  }

  cout << res << endl;
  return 0;
 } 
