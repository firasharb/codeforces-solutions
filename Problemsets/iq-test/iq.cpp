#include <iostream>
#include <string> 
#include <math.h>
#include <vector>
#include <algorithm>

#define VI std::vector<int>

int main() { 
  int n; 
  std::cin >> n;
  VI evens;
  VI odds;
  VI a;

  while(n--) { 
    int m;
    std::cin >> m;
    if(m % 2 == 0) evens.push_back(m);
    else odds.push_back(m);
    a.push_back(m);
  }

  if(evens.size() == 1) {
    auto elem = std::find(a.begin(), a.end(), evens[0]);
    int index = distance(a.begin(), elem);
    std::cout << index+1 << "\n";
  }
  else {
    auto elem = std::find(a.begin(), a.end(), odds[0]);
    int index = distance(a.begin(), elem);
    std::cout << index+1 << "\n";
  }
}

