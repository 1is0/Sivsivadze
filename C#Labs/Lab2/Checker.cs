using System;
using System.Collections.Generic;
using System.Text;

namespace _2ndCsharp
{
    class InputChecker
    {
        public long Checker(string s)
        {
            long solution;
            Console.Clear();
            Console.WriteLine("input {0}", s);
            if (!Int64.TryParse(Console.ReadLine(), out solution))
            {
                Console.Clear();
                Console.WriteLine("error. input {0}", s);
                while (!Int64.TryParse(Console.ReadLine(), out solution))
                {
                    Console.Clear();
                    Console.WriteLine("error. input {0}", s);
                }
            }
            Console.Clear();
            return solution;
        }
    }
}
