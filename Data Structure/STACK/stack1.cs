using System;

class Stacksample
{
  public static void Main(string[] args)
  {
    Stack<int> number = new Stack<int>();
    number.Push(50);
    number.Push(40);

    number.Push(30);

    number.Push(20);
    number.Push(10);
    foreach (int s in number)
    {
      Console.WriteLine(s);

    }
      Console.WriteLine("Top number: " + number.Peek());
    Console.WriteLine("popped number: " + number.Pop());
  
  }
}