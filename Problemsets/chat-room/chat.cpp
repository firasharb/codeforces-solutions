#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <cmath>
#include <math.h>

#define FOR(i, s, n) for(int i = s; i < n; i++)
#define ll long long

using namespace std;

void solve(string s) { 
  int counter = 0;
  FOR(i, 0, s.size()) { 
    if(counter == 0 && s[i] == 'h') counter++;
    if(counter == 1 && s[i] == 'e') counter++;
    if((counter == 2 || counter == 3) && s[i] == 'l') counter++;
    if(counter == 4 && s[i] == 'o') counter++;
  }
  if (counter == 5) cout << "YES" << "\n";
  else cout << "NO" << "\n";
}

int main() { 
  string s;
  cin >> s;
  solve(s);
}