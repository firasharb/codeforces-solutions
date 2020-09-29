// #include <iostream>
// #include <algorithm>
// #include <math.h>
// #include <string>
// #include <vector> 
// #include <cmath>
// #include <map>
// #include <set>
// #include <unordered_set>
// #include <unordered_map>
// #include <deque>
// #include <queue>
// #include <stack>
#include <bits/stdc++.h>

#define ll long long
#define FOR(i, s, n) for(int i = s; i < n; i++)
#define vi vector<int>

using namespace std;

int solve() { 
  string a;
  string b;
  cin >> a >> b;
  FOR(i, 0, a.size()) { 
    char lower_a = tolower(a[i]);
    char lower_b = tolower(b[i]);
    if(lower_a != lower_b)
      return lower_a < lower_b ? -1 : 1;
  }
  return 0;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cout << solve() << "\n";
}