#include <iostream>
using namespace std;

int search(int arr[],int n,int target){

  for (int i = 0; i < n;i++){
    if(arr[i]==target)
      return i;
  }
  return -1;
}





int main(int argc, char const *argv[])
{
  int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
  int n = sizeof(arr) / sizeof(arr[0]);

  int target = 50;
  int result = search(arr, n, target);
   if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found in the array." << endl;

    return 0;
}

