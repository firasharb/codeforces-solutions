#include <iostream> 
#include <vector>

using namespace std;

int linearSearch(vector<int> arr, int elem) { 
  for(int i = 0; i < arr.size(); i++) { 
    if(arr[i] == elem) return i;
  }
  return -1;
}

int main() { 
    /////////////////////
   /// START TESTING ///
  /////////////////////

  vector<int> arr; 
  for(int i = 1; i <= 10; i++) arr.push_back(i);
  //vector = {1,2,3,4,5,6,7,8,9,10}

  int a1 = 5;
  int a2 = 15;

  cout << linearSearch(arr,a1) << "\n"; //--> returns 4
  cout << linearSearch(arr, a2) << "\n"; //--> returns -1 

    /////////////////////
   //// END TESTING ////
  /////////////////////
}
