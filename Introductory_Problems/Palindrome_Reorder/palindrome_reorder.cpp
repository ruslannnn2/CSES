//if n is even then all frequencies have to be even
//if n is odd then at most ONE frequency can be odd
//
//you can just build around the center indices.


#include <bits/stdc++.h>
#include <map>
#include <string>

using namespace std; 

 int main () {
  ios::sync_with_stdio(0);
  
  string s;
  cin >> s;
  long long n = s.length();
  string out;

  map<char, int> freqs;

  for(int i = 0; i < n; i++){
    freqs[s[i]]++;
  }


  int numOdds = 0;
  char oddChar = ' ';
  for(auto x: freqs){
    numOdds += (x.second % 2 == 0)? 0: 1;
    if (x.second % 2 != 0) oddChar = x.first;
  }
  
  if(((n % 2 == 0 && numOdds == 0) || (n % 2 == 1 && numOdds == 1))){
    if (n % 2 == 0){
      for(auto x: freqs){
        out.append(x.second/2, x.first);
      }
      string temp = out;
      reverse(temp.begin(), temp.end());

      cout<< out << temp <<endl;
    } else{
      for(auto x: freqs){
        if(x.first != oddChar)
          out.append(x.second/2, x.first);
      }
      string temp = out;
      string middle(freqs[oddChar], oddChar);
      reverse(temp.begin(), temp.end());

      cout<< out << middle<< temp <<endl;
    }
  }else{
    cout << "NO SOLUTION" << endl;
  }
  

  

  return 0;
 }
