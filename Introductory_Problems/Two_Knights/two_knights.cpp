// count all the unrestricted ways, so in a MxM board thats
// M^2 choose 2, so (m)(m-1)/2. Then subtract the restricted 
// postions, so in a 3x2 area where the knights CAN attack each 
// other thats 2 possible ways, not 4 cuz they're identical.
// so thats (k-1) * (k-2). But we also consider the column (or row depending on which you chose first)
// orientation so multiply that by 2, so now its 2(k-1)(k-2). Finally,
// multiply by two again because thats how many ways you can attack in those orientations 
// as described previously.

#include <bits/stdc++.h>

using namespace std; 

 int main () {
  ios::sync_with_stdio(0);
 
  long long n;
  cin >> n;

  for (long long i = 1; i <= n ; i++){
    cout << ((i * i) * ((i * i) -1)/2) - 4 * ((i-1) * (i-2)) << endl;
  }

 } 
