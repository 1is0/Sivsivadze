using System;
using System.Runtime.InteropServices;
namespace LR4._2
{
    class Program
    {

        [DllImport("DLL.dll", CallingConvention = CallingConvention.Cdecl)]
        static extern int Add(int a, int b);

        [DllImport("DLL.dll", CallingConvention = CallingConvention.Cdecl)]
        static extern int Sub(int a, int b);

        [DllImport("DLL.dll", CallingConvention = CallingConvention.StdCall)]
        static extern int Mult(int a, int b);

        [DllImport("DLL.dll", CallingConvention = CallingConvention.StdCall)]
        static extern float Div(float a, float b);

        [DllImport("DLL.dll", CallingConvention = CallingConvention.Cdecl)]
        static extern int Fact(int a);

        [DllImport("DLL.dll", CallingConvention = CallingConvention.Cdecl)]
        static extern int Pow(int a, int b);

        public static int Check()
        {
            int a;
            while (!int.TryParse(Console.ReadLine(), out a) || a <= 0 || a > 11)
            {
                Console.Write("Incorrect data, repeat: ");
            }
            return a;
        }

        static void Main(string[] args)
        {
            Console.Write("Enter a: ");
            int a = Check();
            Console.Write("Enter b: ");
            int b = Check();
            Console.WriteLine($"a = {a}\nb = {b}");
            Console.WriteLine("a + b = " + Add(a, b));
            Console.WriteLine("a - b = " + Sub(a, b));
            Console.WriteLine("a * b = " + Mult(a, b));
            Console.WriteLine("a / b = " + Div((float)a, (float)b));
            Console.WriteLine("b / a = " + Div((float)b, (float)a));
            Console.WriteLine("a! = " + Fact(a));
            Console.WriteLine("b! = " + Fact(b));
            Console.WriteLine("a^b = " + Pow(a, b));
            Console.WriteLine("b^a = " + Pow(b, a));
        }
    
    }
}
