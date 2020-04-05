using System;
using System.Collections.Generic;
using System.Text;

namespace _2ndCsharp
{
    class Prim2
    {
        public void Func()
        {
            Console.Clear();
            string s;
            Console.WriteLine("Input string");
            s = Console.ReadLine();
            int counter = 0;
            string[] words = s.Split(new char[] { ' ' }, StringSplitOptions.RemoveEmptyEntries);
            foreach(string a in words)
            {
                counter++;
            }
            for (int i = counter  - 1; i >=0; i--)
            {
                Console.WriteLine(words[i]);
            }
            return;


        }
    }
}
