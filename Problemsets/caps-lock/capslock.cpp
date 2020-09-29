#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <vector> 
#include <cmath>
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <deque>
#include <queue>
#include <stack>

#define ll long long
#define FOR(i, s, n) for(int i = s; i < n; i++)
#define vi vector<int>

using namespace std;

void solve() { 
  string s;
  cin >> s;

  /*
    There are 2 cases here: 
      1. Either the string has all capital --> turn all chars to lowercase
      2. Or the string has lowercase first letter and all caps the rest --> flip the chars
  */

  int n = s.size();
  int counter = 0; 

  //case 1
  if (tolower(s[0]) == s[0] || toupper(s[1]) == s[1]) {
    FOR(i, 1, n) { 
      if(toupper(s[i]) == s[i]) counter++;
    }

    if(counter == n - 1) { 
      if(toupper(s[0]) == s[0]) s[0] = tolower(s[0]);
      else s[0] = toupper(s[0]);
      FOR(i, 1, n) { 
        s[i] = tolower(s[i]);
      }
    }
  }
  cout << s << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 

  solve();
}