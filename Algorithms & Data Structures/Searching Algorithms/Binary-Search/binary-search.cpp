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
int binarySearch(vector<int> arr, int low, int high, int elem) {
  if(high >= low) {
    int middle = low + (high - low) / 2; //Finding the middle point

    //checking if the middle element is the element we are searching for.
    if(arr[middle] == elem) return middle;

    //else recursing to left part or the right part
    if(arr[middle] > elem) return binarySearch(arr, low, middle-1, elem);
    return binarySearch(arr, middle+1, high, elem);
  }   
  return -1;
} 

//This function is used to clean up the code, since it require of the user to just input the 
//Array and the Element and it handles the rest.
int search(vector<int> arr, int elem) { 
  if(arr.size() == 0) return -1;
  else return binarySearch(arr, 0, arr.size() - 1, elem);
}
  
int main() 
{
    ///////////////////////
   //// Start Testing ////
  ///////////////////////
  
  vector<int> arr;
  for(int i = 1; i <= 10; i++) arr.push_back(i); 

  cout << search(arr, 8) << "\n"; //--> returns 7
  cout << search(arr, 20) << "\n"; //--> returns -1
  cout << search(arr, 1623) << "\n"; //--> returns -1
  
    /////////////////////
   //// End Testing ////
  /////////////////////
}
