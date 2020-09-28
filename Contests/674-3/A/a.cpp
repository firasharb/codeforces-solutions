#include <iostream>
#include <math.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  double n, x, t;
  cin >> t;
  cout << "\n";
  while(t--) { 
    cin >> n >> x;
    if(n<=2) { cout << 1 << "\n"; }
    else { cout << ceil((n - 2)/x) + 1 << "\n"; }
  }
  return 0;
}
