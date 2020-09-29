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

  bool isDangerous = false;
  char current = s[0];
  ll counter = 1; //we start with one to consider the first element

  FOR(i, 1, s.size()) { 
    //as soon as we encounter char that is not what we are considering now then we consider it and start counter at 1
    if(s[i] != current) { 
      current = s[i];
      counter = 1;
    } else {
      counter++;
      if(counter >= 7) isDangerous = true;
    }
  }
  cout << (isDangerous ? "YES" : "NO") << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
 
  solve();
}