/*
  Author: Firas Harb
  Language: GNU c++11
  Data: Thurday, October 1 2020
*/
#include <iostream>
#include <vector> 

using namespace std;

//Here I have used vectors because I feel like they are the best
//but if you want to use anything else feel free it takes just
//a little tinkering and should work fine

void merge(vector<int> &arr, int left, int middle, int right) { 
  //Make two temporary vectors that will store left and right arrays

  //keep track of their size
  int left_size = middle - left + 1;
  int right_size = right - middle;

  vector<int> left_arr; 
  vector<int> right_arr;

  //Now we fill both of the vectors with their values
  for(int i = 0; i < left_size; i++) left_arr.push_back(arr[left + i]);
  for(int j = 0; j < right_size; j++) right_arr.push_back(arr[middle + j + 1]);

  //Now start merging both of them
  int i = 0;
  int j = 0;
  int k = left;

  //Merging arr from left index to right index
  //There may still be remaining elements that we didn't add so we 
  //will add them later
  while(i < left_size && j < right_size) { 
    if(left_arr[i] <= right_arr[j]) { 
      arr[k] = left_arr[i];
      i++;
    } else { 
      arr[k] = right_arr[j];
      j++;
    }
    k++;
  }

  //Adding remaining elements from left array
  while(i < left_size){
    arr[k] = left_arr[i]; 
    i++; k++;
  } 
  //Adding remaining elements from right array
  while(j < right_size) { 
    arr[k] = right_arr[j];
    j++; k++;
  }
}

void mergeSort(vector<int> &arr, int left, int right) { 
  if(left < right) { 
    //computing the middle index
    int middle = left + (right - left) / 2;
    //call mergeSort for the left half
    mergeSort(arr, left, middle);
    //call mergeSort for the right half
    mergeSort(arr, middle+1, right);
    //merge both halfs
    merge(arr, left, middle, right);
  }
}

int main() { 

  //START TESTING
  
  vector<int> values; 

  values.push_back(3);
  values.push_back(1);
  values.push_back(6);
  values.push_back(2);
  values.push_back(8);
  values.push_back(17);
  //arr looks like {3, 1, 6, 2, 8, 17}
  mergeSort(values, 0, values.size()-1);

  //printing the sorted array
  for(int i = 0; i < values.size(); i++) cout << values[i] << " ";
  //prints {1, 2, 3, 6, 8, 17} as expected

  //END TESTING
}