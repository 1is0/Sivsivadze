using System;
using System.Collections.Generic;
using System.Text;

namespace _2ndCsharp
{
    class Prim3
    {
        public void Func()
        {
            Console.Clear();
            DateTime curr_date = new DateTime();
            curr_date = DateTime.Now;
            for (int i = 0; i < 12; i++)
            {
                switch (curr_date.Month)
                {
                    case 1:
                        {
                            Console.WriteLine("January - Janvier");
                            break;
                        }
                    case 2:
                        {
                            Console.WriteLine("February - Février");
                            break;
                        }
                    case 3:
                        {
                            Console.WriteLine("March - Mars");
                            break;
                        }
                    case 4:
                        {
                            Console.WriteLine("April - Avril");
                            break;
                        }
                    case 5:
                        {
                            Console.WriteLine("May - Mai");
                            break;
                        }
                    case 6:
                        {
                            Console.WriteLine("June - Juin");
                            break;
                        }
                    case 7:
                        {
                            Console.WriteLine("July - Juillet");
                            break;
                        }
                    case 8:
                        {
                            Console.WriteLine("August - Août");
                            break;
                        }
                    case 9:
                        {
                            Console.WriteLine("September - Septembre");
                            break;
                        }
                    case 10:
                        {
                            Console.WriteLine("October - Octobre");
                            break;
                        }
                    case 11:
                        {
                            Console.WriteLine("November - Novembre");
                            break;
                        }
                    case 12:
                        {
                            Console.WriteLine("December - Décembre");
                            break;
                        }

                }
                curr_date = curr_date.AddMonths(1);
            }

        }
    }
}
