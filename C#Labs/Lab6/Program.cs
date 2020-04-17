using System;

namespace _3rdCsharp
{
    class Program
    {
       
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

          
            SpecStudent specStudent = new SpecStudent((courseNum)1,(SpecialtyName)1,"Вася", 18,"MGIA",new DateTime(2020,12,30, 17,30,00),"Sport gamess");
            specStudent.ShowInfo();
   
        }
    }
}


