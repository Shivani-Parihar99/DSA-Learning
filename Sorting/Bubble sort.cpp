/* Bubble Sort is also an in-place sorting algorithm. This is the simplest sorting algorithm and it works on the principle that:
In one iteration if we swap all adjacent elements of an array such that after swap the first element is less than the second element then at the end of the iteration,
the first element of the array will be the minimum element. */
// A function to impement Bubble sort.

#include<bits/stdc++.h>
using namespace std;

void bubblesort (int arr[], int n)
{
  int i,j;
  for(int i = 0; i<n-1; i++){
    // last i elements are already in place
      for(int j = 0; j<n-i-1; j++){
                    if(arr[j]>arr[j+1]){
                        swap(&arr[j], &arr[j+1]);
                    }
      }
}

  // Recursive Bubble sort
  void bubbleSort(int arr[], int n)
{
    // Base case
    if (n == 1)
        return;
 
    // One pass of bubble sort. After
    // this pass, the largest element
    // is moved (or bubbled) to end.
    for (int i=0; i<n-1; i++)
        if (arr[i] > arr[i+1])
            swap(arr[i], arr[i+1]);
 
    // Largest element is fixed,
    // recur for remaining array
    bubbleSort(arr, n-1);
}
