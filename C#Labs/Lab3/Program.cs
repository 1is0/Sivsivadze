using System;

namespace _3rdCsharp
{
    class Program
    {
        static void SetArr(Human[] arr)
        {
            for (int i = 0; i < arr.Length; i++)
            {
                Console.WriteLine("\n");
                arr[i] = new Human();
                Console.Write("Input Name: ");
                arr[i].Name = Console.ReadLine();
                Console.Write("Input Age: ");
                arr[i].Age = CheckInt();
            }

            for (int i = 0; i < arr.Length; i++)
            {
                Console.WriteLine((i + 1) + ". " + arr[i]);
            }
        }

        static int CheckInt()
        {
            int a;
            while (!int.TryParse(Console.ReadLine(), out a) || a <= 0)
            {
                Console.Write("Incorrect input. Try again: ");
            }
            return a;
        }

        static void Main()
        {
            Human obj1 = new Human();
            Human obj2 = new Human("Вася", 18);
            Console.WriteLine(obj1);
            Console.WriteLine(obj2);

            Human[] arr = new Human[2];
            SetArr(arr);
            Console.WriteLine();
        }
    }
}


