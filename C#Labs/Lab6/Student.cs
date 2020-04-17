using System;
using System.Collections.Generic;
using System.Text;

namespace _3rdCsharp
{
    enum courseNum
    {
        First = 1,
        Second,
        Third,
        Fourth,
        Fivth
    }
    enum SpecialtyName
    {
        IaTP = 1,
        CSaN,
        ITS,
        ECS
    }
    class Student: Human
    {
       
        public courseNum _courseNum;
        public Student()
        {
            name = "Ilya";
            age = 18;
            ID = GenerateID();
        }
        public Student(string n, int a, courseNum z)
        {
            name = n;
            age = a;
            _courseNum = z;
            ID = GenerateID();
        }
        public override void ShowInfo()
        {
            Console.WriteLine("Name:{0}", name);
            Console.WriteLine("Age:{0}", age);
            Console.WriteLine("Course:{0}", _courseNum);
            Console.WriteLine("ID:{0}", ID);
            Console.WriteLine("");
        }

    }
    

    
}
