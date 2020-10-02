#include <iostream>

using namespace std;

long long dynamicFib(int n) { 
  //initialize an array for memoizatin
  long long memo[2];
  memo[0] = 0;
  memo[1] = 1;

  for(int i = 2; i <= n; i++) { 
    long long temp = memo[0] + memo[1];
    memo[0] = memo[1];
    memo[1] = temp;
  }

  return memo[1];
}

int main() { 
  int n;
  cin >> n;

  cout << dynamicFib(n) << "\n";
}