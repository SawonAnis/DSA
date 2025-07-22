using System;

class LinearSearch
{
  static int search(int[] arr, int target)
  {
    for (int i = 0; i < arr.Length; i++)
    {
      if (arr[i] == target)
        return i;

    }
    return -1;
  }

  public static void Main(string[] args)
  {
 int[] arr = {10, 20, 30, 40, 50}; 
        int target = 30;

        int result = search(arr, target);

        if (result != -1)
            Console.WriteLine("Element found at index: " + result);
        else
            Console.WriteLine("Element not found in the array.");
    }
}