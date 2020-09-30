/* 
  Author: Firas Harb
  Language: GNU C++11
  Date: Wednesday, 30 September 2020
*/
#include <iostream>
#include <vector>

using namespace std;

//In this algorithm I've used Vectors as I feel they are the best for the job, but this could be easily
//altered to use array or any other data structure that works.
bool binarySearch(vector<int> arr, int l, int r, int x) 
{
  //Checking if there is more than one element in the array
  if (r >= l) { 
    //calculating the middle element in the array
    int mid = l + (r - l) / 2;
    if (arr[mid] == x) 
      return true;  
    //recursing on left half to check for element
    if (arr[mid] > x) 
      return binarySearch(arr, l, mid - 1, x);
    //else we recurse on the right half of the array
    else return binarySearch(arr, mid + 1, r, x); 
  }  
  //If all else fails return false.
  return false; 
} 

//This function is used to clean up the code, since it require of the user to just input the 
//Array and the Element and it handles the rest.
bool search(vector<int> arr, int elem) { 
  if(arr.size() == 0) return false;
  else return binarySearch(arr, 0, arr.size() - 1, elem);
}
  
int main() 
{
    ///////////////////////
   //// Start Testing ////
  ///////////////////////
  
  vector<int> arr;
  for(int i = 0; i < arr.size()-1; i++) arr.push_back(i); 

  cout << search(arr, 8) << "\n"; //--> returns True
  cout << search(arr, 20) << "\n"; //--> returns False
  cout << search(arr, 1623) << "\n"; //--> returns False
  
    /////////////////////
   //// End Testing ////
  /////////////////////
}
