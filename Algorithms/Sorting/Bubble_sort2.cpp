#include <iostream>
using namespace std;


void bubbleSort(int array[], int size) {
    

  for (int j = 0; j < (size-1); j++) {
      
 
    int swapped = 0;
    

    for (int i = 0; i < (size-j-1); ++i) {
        
 
      if (array[i] > array[i + 1]) {

        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
        
        swapped = 1;
      }
    }

    if (swapped == 0)
      break;
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << "  " << array[i];
  }
  cout << "\n";
}

int main() {
  int data[] = {-2, 45, 0, 11, -9};
  

  int size = sizeof(data) / sizeof(data[0]);
  
  bubbleSort(data, size);
  
  cout << "Sorted Array in Ascending Order:\n";
  printArray(data, size);
}