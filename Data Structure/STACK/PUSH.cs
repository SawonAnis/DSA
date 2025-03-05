using System;

class Program
{
  public static void Main(string[] args)
  {
    Stack<int> numbers = new Stack<int>();

    numbers.Push(1);
    numbers.Push(2);
    numbers.Push(3);
    numbers.Push(4);
    numbers.Push(5);

    foreach (int i in numbers)
    {
      Console.WriteLine(i);
      
    }
  }
}