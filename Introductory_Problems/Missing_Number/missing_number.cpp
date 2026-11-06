// Since we are given n, the number of elements from 1-n
// we can use the sum of first n natural numbers to find 
// our expected sum, then subtract what we actually have
// and the result is our answer. nice.

#include <bits/stdc++.h>

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

  cout << expected - sum << "\n";
  return 0;
 } 
