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
  int n;
  cin >> n;
  //base case 
  if(n <= 1) cout << 0 << "\n";
  else if(n == 2) cout << 1 << "\n";
  else if(n == 3 || n == 4) cout << 2 << "\n";
  else { 
    ll x = sqrt(n);
    ll result = n/x + (x-1);
    if (n % x == 0) result--;
    cout << result << "\n";
  }
}
 
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
 
  int t; 
  cin >> t;
 
  FOR(i, 0, t) 
    solve();
}