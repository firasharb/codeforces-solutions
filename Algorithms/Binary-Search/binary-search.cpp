// C++ program to implement recursive Binary Search 
#include <iostream>
#include <vector>

#define FOR(i, s, n) for(int i = s; i < n; i++)
using namespace std;

bool binarySearch(vector<int> arr, int l, int r, int x) 
{ 
  if (r >= l) { 
    int mid = l + (r - l) / 2;
    if (arr[mid] == x) 
      return true;  
    if (arr[mid] > x) 
      return binarySearch(arr, l, mid - 1, x);
    return binarySearch(arr, mid + 1, r, x); 
  }  
  return false; 
} 

bool search(vector<int> arr, int elem) { 
  if(arr.size() == 0) return false;
  else return binarySearch(arr, 0, arr.size() - 1, elem);
}
  
int main(void) 
{ 
  vector<int> arr;
  FOR(i, 0, 10) arr.push_back(i); 

  cout << search(arr, 8) << "\n"; //--> returns True
  cout << search(arr, 20) << "\n"; //--> returns False
  cout << search(arr, 1623) << "\n"; //--> returns False
}