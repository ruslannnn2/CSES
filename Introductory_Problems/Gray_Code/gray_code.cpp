// i found interesting pattern where the right bit of the gray code 
// is the xor of the right most two bits of its order 
// so for a gray code number 101, its the 6th in the n = 3 sequence and six is 110
// so xor the 1 and 0 bits (the right most bits of 110) and u get 1, and thats the value
// of the rightmost bit in the gray code. to get the rest of the bits you just xor i with (i >> 1)
// so 110 ^ 011 is 101 and thats the gray code. nice


#include <bits/stdc++.h>

using namespace std; 

 int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long n;
  cin >> n;

  for(int i = 0; i < (1 << n); i++){
    long long gray = (i ^ (i >> 1));

    for(int j = n-1; j >= 0; j--){
      cout << ((gray >> j) & 1);
    }
    cout << endl;
  }

 } 
