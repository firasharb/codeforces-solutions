#include <iostream> 
#include <math.h>

int main() { 
  long n, m, a;
  std::cin >> n >> m >> a;
  
  long long result = ceil((double)m/a) * ceil((double)n/a);

  std::cout << result << "\n";
} 