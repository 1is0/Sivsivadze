using System;
namespace _3rdCsharp
{
    class Program
    {
       
        delegate string NameShow(string _1,string _2);
       
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
            
            NameShow nameShow = (x, y) => x + y;
            SpecStudent specStudent = new SpecStudent((courseNum)1,(SpecialtyName)1,"Vasya", 16,"MGIA",new DateTime(2020,12,30, 17,30,00),"Sport games");
            Console.WriteLine(nameShow("Name:", specStudent.name));
            specStudent._123123 += DisplayMessage;
            if (specStudent.age<17)
            {
                Console.WriteLine("Age:N/A");
            }
            else
            {
                specStudent.showAge();
            }

            specStudent.ShowInfo();

            static void DisplayMessage(string message)
            {
                Console.WriteLine(message);
            }
        }
    }
}


