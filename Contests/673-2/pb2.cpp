#include <iostream>
#include <math.h> 
#include <vector> 
#include <string> 
#include <set> 
#include <map>
#include <algorithm>

int main() { 
  int t; 
  std::cin >> t;

  

  for(int i = 0; i < t; i++) { 
    int n, T;
    std::cin >> n >> T;
    std::vector<int> a;
    std::vector<int> c; 
    std::vector<int> d;  

    //filling up the array a with the ints
    for(int j = 0; j < n; j++) { 
      int m; 
      std::cin >> m;
      a.push_back(m);
    }
    std::sort(a.begin(), a.end());

    if(T % 2 == 0) { 
      for(int j = 0; j < a.size()/2; j++) { 
        c.push_back(1);
      }
      for(int j = a.size()/2; j < a.size(); j++) {
        d.push_back(0);
      }
    } else { 

        int k = n-1;
      for(int j = 0; j < a.size(); j++) { 
        while(k >= j) { 
          if(a[j] + a[k] == T) { 
            c.push_back(a[j]);
            d.push_back(a[k]);
          } else { 
            k--;
          }
        }
      }

    }
    
    for(int j = 0; j < c.size(); j++) { 
      std::cout << c[j] << "\t";
    }
    std::cout << std::endl;
    for(int j = 0; j < d.size(); j++) { 
      std::cout << d[j] << "\t";
    }
  }
  
}