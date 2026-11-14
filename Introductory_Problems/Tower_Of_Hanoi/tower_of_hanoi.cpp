// break it up into smaller hanoi games
// notice that for bottom disk to get to final the top disks need to move
// so first hanoi call moves them to the auxillary peg then we move once 
// the biggest disk to the rightmost peg, then we have to move our n -1 pegs from the middle
// to the right most and now auxillary peg is the initial source peg. 
//
// enjoyed.

#include <bits/stdc++.h>
using namespace std; 

void hanoi(int n, int source, int dest, int aux);

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long n;
  cin >> n;
  cout << (2 << (n-1)) - 1 <<endl;
  hanoi(n, 1, 3 , 2);

} 

void hanoi(int n, int source, int dest, int aux){
  if(n == 1){
    cout << source << " " << dest << endl;
    return;
  }

  hanoi(n - 1, source, aux, dest);
  cout << source << " " << dest << endl;
  hanoi(n - 1, aux, dest, source);
}

