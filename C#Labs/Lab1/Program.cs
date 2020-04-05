using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
namespace _1stCsharp
{
    class Program
    {
        static void Main(string[] args)
        {
            int i, quantity;
            Temp temp = new Temp();
            Backpack backpack = new Backpack();
            bool incorrectInput = true;
            int A = 0;
            double B = 0;
            backpack.SetSize(input_checker("backpack size:"));
            quantity = input_checker("item quantity:");
            Object[] obj = new Object[quantity];
            for (i = 0; i < quantity; i++)
                obj[i] = new Object();
            Console.Clear();
            for (i = 0; i < quantity; i++)
            {

                Console.WriteLine("input N{0} item size:", i + 1);        
                while (incorrectInput)
                {
                    if(Int32.TryParse(Console.ReadLine(), out A))
                    {
                        if(A < 0)
                        {
                            Console.Clear();
                            Console.WriteLine("error. input N{0} item size:", i + 1);
                        }
                        else
                        {
                            incorrectInput = false;
                        }
                    }
                    else
                    {
                        Console.Clear();
                        Console.WriteLine("error. input N{0} item size:", i + 1);
                    }
                }
                incorrectInput = true;
                obj[i].SetSize(A);
                Console.Clear();
                Console.WriteLine("input N{0} item value:", i + 1);
               
                while (incorrectInput)
                {

                    if (double.TryParse(Console.ReadLine(), out B))
                    {                      
                        if (B < 0)
                        {
                            Console.Clear();
                            Console.WriteLine("error. input N{0} item value:", i + 1);
                        }
                        else
                        {
                            incorrectInput = false;
                        }
                    
                    }
                    else
                    {
                        Console.Clear();
                        Console.WriteLine("error. input N{0} item size:", i + 1);
                    }
                }
                
                obj[i].SetValue(B);
                obj[i].SetValuePerSlot(obj[i].GetValue() / obj[i].GetSize());
                Console.Clear();
            }
            for (i = 0; i < quantity; i++)
            {
                Console.WriteLine("N{0} have VPS = {1}", i + 1, obj[i].GetValuePerSlot());
            }
            for (int j = 0; j < quantity; j++)
            {
                for (i = 0; i < quantity - 1; i++)
                {
                    if (obj[i].GetValuePerSlot() < obj[i + 1].GetValuePerSlot())
                    {
                        temp.SetDouble(obj[i].GetValue());
                        obj[i].SetValue(obj[i + 1].GetValue());
                        obj[i + 1].SetValue(temp.GetDouble());

                        temp.SetInteger(obj[i].GetSize());
                        obj[i].SetSize(obj[i + 1].GetSize());
                        obj[i + 1].SetSize(temp.GetInteger());

                        temp.SetDouble(obj[i].GetValuePerSlot());
                        obj[i].SetValuePerSlot(obj[i + 1].GetValuePerSlot());
                        obj[i + 1].SetValuePerSlot(temp.GetDouble());
                       

                    }
                }
            }
            double totalValue = 0;
            int equipped = 0;
            int q = 0;
            for (i = 0; i < quantity; i++)
            {
                if (equipped + obj[i].GetSize() <= backpack.GetSize())
                {
                    q++;
                    equipped += obj[i].GetSize();
                    totalValue += obj[i].GetValue();
                    Console.WriteLine("Added object with size = {1} and value = {2} is placed in backpack", q, obj[i].GetSize(), obj[i].GetValue());
                }
            }
            Console.WriteLine("Total {0} objects with total size = {1} and total value = {2}, free space = {3}\nPress any key to exit...", q, equipped, totalValue, backpack.GetSize() - equipped);
            Console.ReadKey();
        }

        static int input_checker(string s)
        {
            int solution = 0;
            bool incorrectInput = true;
            Console.Clear();
            Console.WriteLine("input {0}", s);
            while (incorrectInput)
            {

                if (Int32.TryParse(Console.ReadLine(), out solution))
                {
                    if (solution < 0)
                    {
                        Console.Clear();
                        Console.WriteLine("error. input {0}", s);
                    }
                    else
                    {
                        incorrectInput = false;
                    }
                }
                else
                {
                    Console.Clear();
                    Console.WriteLine("error. input {0}", s);
                }
            }
              return solution;
        }
    }
}
