#include <iostream>
#include <math.h>
#include <string>
#include <vector> 
#include <map>
#include <cmath>

#define ll long long
#define FOR(i, s, n) for(int i = s; i < n; i++)
#define vi vector<int>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t; 
  while(t--) { 
    //Taking input from the user
    int n, m; 
    cin >> n >> m;

    //Checking if there is at least one tile that has (i,j) == (j,i)
    int count = 0;
    FOR (i, 0, n) { 
      int a,b,c,d;
      cin >> a >> b >> c >> d;
      if(b == c) count = 1;
    }

    /*
      3 conditions:   
        1. Either the final matrix is of odd size meaning m is odd --> return NO
        2. The count is equal to 0 --> return NO
        3. The count is equal to 1 --> return YES
    */
    if(m < 2 || m % 2 != 0) cout << "NO" << "\n";
    else{ 
      if(count == 1) cout << "YES" << "\n";
      else cout << "NO" << "\n";
    }
  }
  return 0;
}