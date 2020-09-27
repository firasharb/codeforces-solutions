#include <iostream>
#include <string>
#include <set>

int main() { 
  std::string avatar;
  std::cin >> avatar;

  std::set<char> letters;

  for(int i = 0; i < avatar.size(); i++) { 
    letters.insert(avatar[i]);
  }

  if(letters.size() % 2 != 0) {  
    std::cout << "IGNORE HIM!" << "\n";
  } else { 
    std::cout << "CHAT WITH HER!";
  }
}