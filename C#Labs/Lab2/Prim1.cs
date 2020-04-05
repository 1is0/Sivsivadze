using System;
using System.Collections.Generic;
using System.Text;

namespace _2ndCsharp
{
    class Prim1
    {
        public long Func()
        {
            InputChecker check = new InputChecker();
            long a, b, degree = 0, composition = 1;
            a = check.Checker("a");
            b = check.Checker("b");
            for (long i = a; i <= b; i++)
            {
                composition *= i;
            }
            while (composition % Math.Pow(2, degree) != composition)
            {
                degree++;
            }

            return degree - 1;
        }
    }
}
