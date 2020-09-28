#include <iostream> 
#include <math.h> 
#include <vector>
#include <algorithm> 

int main() { 
  long long n; 
  std::cin >> n;

  

  for(int i = 0; i < n; i++) { 
    long long ans = -1000000000000000000;

    std::vector<long long> pos;
    std::vector<long long> neg;

    bool zero = false;
    
    long long m; 
    std::cin >> m; 

    for(int j = 0; j < m; j++) { 
      long long l;
      std::cin >> l;
      //adding to both arrays 
      if(l == 0) { zero = true; }
      if(l >= 0) { pos.push_back(l); }
      if(l < 0) { neg.push_back(l); }
    }

    std::sort(pos.begin(), pos.end());
    std::sort(neg.begin(), neg.end());
    long long pos_size = pos.size();
    long long  neg_size = neg.size();

    //zero
    if(zero) { ans = std::max(ans, 0LL); }
    //positive value
    if(pos_size >= 5) { ans = std::max(ans, pos[pos_size-1] * pos[pos_size-2] * pos[pos_size-3] * pos[pos_size-4] * pos[pos_size-5]); }
    if(pos_size >= 3 && neg_size >= 2) { ans = std::max(ans, neg[0] * neg[1] * pos[pos_size-1] * pos[pos_size-2] * pos[pos_size-3]); }
    if(pos_size >= 1 && neg_size >= 4) { ans = std::max(ans, pos[pos_size-1] * neg[0] * neg[1] * neg[2] * neg[3]); }

    //negatives
    if(neg_size >= 5) { ans = std::max(ans, neg[neg_size-1] * neg[neg_size-2] * neg[neg_size-3] * neg[neg_size-4] * neg[neg_size-5]); }
    if(neg_size >= 3 && pos_size >= 2) { ans = std::max(ans, neg[neg_size-1] * neg[neg_size-2] * neg[neg_size-3] * pos[0] * pos[1]); }
    if(neg_size >= 1 && pos_size >= 4) {ans = std::max(ans, neg[neg_size-1] * pos[0] * pos[1] * pos[2] * pos[3]);}
    
    std::cout << ans << "\n";
  }
}