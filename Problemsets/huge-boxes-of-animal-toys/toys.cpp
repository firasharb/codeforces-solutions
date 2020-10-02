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
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  //Base Case
  if(a + b + c + d == 1) { 
    if(a == 1) cout << "Ya Tidak Tidak Tidak" << "\n";
    else if(b == 1) cout << "Tidak Ya Tidak Tidak" << "\n";
    else if(c == 1) cout << "Tidak Tidak Ya Tidak" << "\n";
    else cout << "Tidak Tidak Tidak Ya" << "\n";
  }

  //Result will be guaranteed to be positive
  else if((a + b) % 2 == 0) { 
    if(c == 0 && b == 0) cout << "Tidak Tidak Tidak Ya" << "\n";
    else if (d == 0 && a == 0) cout << "Tidak Tidak Ya Tidak" << "\n";
    else cout << "Tidak Tidak Ya Ya"<< "\n";
  }
  //Result will be guaranteed to be negative
  else { 
    if(b == 0 && c == 0) cout << "Ya Tidak Tidak Tidak" << "\n";
    else if(a == 0 && d == 0) cout << "Tidak Ya Tidak Tidak" << "\n";
    else cout << "Ya Ya Tidak Tidak"<< "\n"; 
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