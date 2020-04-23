using System;

namespace Lab7
{
    class Program
    {
        static void Main(string[] args)
        {
            int n, m;
            Console.WriteLine("Input integer number(N): ");
            n = NewInteger.IntChecker();

            Console.WriteLine("Input integer number > 0 (M): ");
            m = NewInteger.NatChecker();
          
            Console.WriteLine(NewInteger.StrMethod1(n, "N"));
            Console.WriteLine("M = {0}", m);

            NewInteger num1 = new NewInteger { Value = n };
            NewInteger num2 = new NewInteger { Value = m };

            bool check = num1 == num2;
            switch(check)
            {
                case false:
                    {
                        check = num1 > num2;
                       switch(check)
                        {
                            case false:
                                {
                                    Console.WriteLine("N < M");
                                    break;
                                }
                            case true:
                                {
                                    Console.WriteLine("N > M");
                                    break;
                                }
                        }
                        break;
                    }
                case true:
                    {
                        Console.WriteLine("N = M");
                        break;
                    }
            }
            Console.WriteLine("N + M = {0}", (num1 + num2).Value);

            Console.WriteLine("N - M = {0}", (num1 - num2).Value);

            Console.WriteLine("N * M = {0}", (num1 * num2).Value);

            Console.WriteLine("N / M = {0}", (num1 / num2).Value);

            Console.WriteLine("N % M = {0}", (num1 % num2).Value);

            Console.WriteLine("M % N = {0}", (num2 % num1).Value);



        }
    }
}
