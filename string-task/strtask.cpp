#include <iostream>
#include <string> 

int main() { 
  char vowels[] = {'A', 'O', 'Y', 'E', 'U', 'I'};

  std::string input; 
  std::cin >> input;

  std::string result = "";
  for (int i = 0; i < input.size(); i++) { 
    int ascii = int(input[i]);
    bool exists = std::find(std::begin(vowels), std::end(vowels), toupper(input[i])) != std::end(vowels);
    if(exists) { 
      result.append("");
    } else { 
      result.push_back('.');
      result.push_back(tolower(input[i]));
    }
  }
  std::cout << result << "\n";
}