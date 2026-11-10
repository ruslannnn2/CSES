#include <bits/stdc++.h>
using namespace std; 

//find how many factors of five fit into n.
//raise power of 5 by 1 while its still smaller
//than n. 

 int main () {
  ios::sync_with_stdio(0);
  long long n;
  cin >> n;
  long long res = 0;
  long long factor = 5;

  while(factor <= n){
    res += (n / factor);
    factor *= 5;
  }

  cout << res <<endl;

 } 

