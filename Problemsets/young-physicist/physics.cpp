#include <iostream>
#include <vector>
#include <string>

std::string equilibrium(int n) { 
  std::vector< std::vector<int> > vectors;

  for(int i = 0; i < n; i++) { 
    std::vector<int> temp; 
    for(int j = 0; j < 3; j++) { 
      int m; 
      std::cin >> m;
      temp.push_back(m);
    }
    vectors.push_back(temp);
  }

  for(int i = 0; i < 3; i++) { 
    int pos = 0;
    for(int j = 0; j < vectors.size(); j++) { 
      pos += vectors[j][i];
    } 
    if(pos != 0) { return "NO"; }
  }
  return "YES";
}

int main() { 
  int n; 
  std::cin >> n;

  std::cout << equilibrium(n) << "\n";
}