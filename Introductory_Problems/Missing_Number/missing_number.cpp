#include <bits/stdc++.h>
#include <string>

using namespace std; 

 int main () {
  ios::sync_with_stdio(0);

  long long n;
  cin >> n;
  long long sum = 0;
  long long expected = ((n) * (n+1))/2;

  for(int i = 0; i < n -1 ; i++){
    long long temp;
    cin >> temp;
    sum += temp;
  }

  cout << to_string(expected - sum);
  return 0;
 } 
