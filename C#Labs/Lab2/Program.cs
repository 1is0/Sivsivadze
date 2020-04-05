using System;
using System.Text;

namespace _2ndCsharp
{
    
    class Program
    {
        static void Main(string[] args)
        {


            Prim1 pr1 = new Prim1();
            Prim2 pr2 = new Prim2();
            Prim3 pr3 = new Prim3();

            Console.OutputEncoding = System.Text.Encoding.Unicode;
            int choose;
            
            while(true)
            {
                Console.WriteLine("Choose number(1-3):\nPress 4 to exit");
                Int32.TryParse(Console.ReadLine(),out choose);
                Console.Clear();
                switch (choose)
                {
                    case 1:
                        {
                            Console.WriteLine("Solution is {0}", pr1.Func());
                            Console.ReadKey();
                            Console.Clear();
                            break;  
                        }
                    case 2:
                        {
                           pr2.Func();
                            Console.ReadKey();
                            Console.Clear();
                            break;
                        }
                    case 3:
                        {
                            pr3.Func();
                            Console.ReadKey();
                            Console.Clear();
                            break;
                        }
                    case 4:
                        {
                            return;
                        }
                    default:
                        {
                            Console.Clear();
                            Console.WriteLine("error.");
                            break;
                        }      
                }      
            }
        }
    }
}
