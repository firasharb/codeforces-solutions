#include <iostream>
#include <math.h> 
#include <vector> 
#include <string> 
#include <set> 
#include <map>
#include <algorithm>

int main() { 
  std::vector<long> results;
  int t;
  std::cin >> t; 

  for(int i = 0; i < t; i++) { 
    int n, k;
    std::cin >> n >> k;

    std::vector<long> piles;
    for(int j = 0; j < n; j++) {
      int m; 
      std::cin >> m; 
      piles.push_back(m);
    }

    //sort the array so we can find the max
    std::sort(piles.begin(), piles.end());

    int counter = 0;
    //Now we check for the max times we can do the spell
    for(int s = 1; s < piles.size(); s++) { 
      while(piles[s] + piles[0] <= k) { 
        piles[s] += piles[0];
        counter++;
      }
    }
    results.push_back(counter);
  } 
  for(int i = 0; i < results.size(); i++) { 
    std::cout << results[i] << "\n";
  }
}