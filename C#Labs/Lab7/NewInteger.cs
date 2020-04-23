using System;
using System.Collections.Generic;
using System.Text;

namespace Lab7
{
    class NewInteger
    {
        public int Value { get; set; }

        public static NewInteger operator +(NewInteger c1, NewInteger c2)
        {
            return new NewInteger { Value = c1.Value + c2.Value };
        }

        public static NewInteger operator *(NewInteger c1, NewInteger c2)
        {
            return new NewInteger { Value = c1.Value * c2.Value };
        }

        public static NewInteger operator -(NewInteger c1, NewInteger c2)
        {
            return new NewInteger { Value = c1.Value - c2.Value };
        }

        public static NewInteger operator /(NewInteger c1, NewInteger c2)
        {
            return new NewInteger { Value = c1.Value / c2.Value };
        }

        public static NewInteger operator %(NewInteger c1, NewInteger c2)
        {
            return new NewInteger { Value = c1.Value % c2.Value };
        }





        public static bool operator >(NewInteger c1, NewInteger c2)
        {
            return c1.Value > c2.Value;
        }
        public static bool operator <(NewInteger c1, NewInteger c2)
        {
            return c1.Value < c2.Value;
        }
        public static bool operator ==(NewInteger c1, NewInteger c2)
        {
            return c1.Value == c2.Value;
        }
        public static bool operator !=(NewInteger c1, NewInteger c2)
        {
            return c1.Value != c2.Value ;
        }


        public static int IntChecker()
        {
            int a;
            while (!Int32.TryParse(Console.ReadLine(), out a))
            {
                Console.WriteLine("Wrong input.Try again: ");
            }
            return a;
        }


        public static int NatChecker()
        {
            int a;
            while ((!Int32.TryParse(Console.ReadLine(), out a)) || a <= 0)
            {
                Console.WriteLine("Wrong input.Try again: ");
            }
            return a;
        }

        public static string StrMethod1(int a,string prev)
        {
            string b;
            b = prev + $" = {a}";

            return b;
        }
        /*
        public static string StrMethod2(int a, string prev)
        {
            string b, c;
            c = ;

            return b;
        }
        */











    }
}
