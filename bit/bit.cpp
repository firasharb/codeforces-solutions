#include <iostream>
#include <string>

int main() { 
  int x; 
  std::cin >> x; 

  int result = 0;

  for(int i = 0; i < x; i++) { 
    std::string op; 
    std::cin >> op; 

    if(op == "X++") { result++; } 
    if (op == "++X") { ++result; }
    if (op == "X--") { result--; }
    if (op == "--X") { --result; }
  }

  std::cout << result << "\n";
}