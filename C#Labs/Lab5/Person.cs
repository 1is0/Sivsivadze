using System;
using System.Collections.Generic;
using System.Text;

namespace _3rdCsharp
{
    class Human
    {
        public string name { get; set; }
        public int age { get; set; }
        protected string ID { get; set; }

        public Human()
        {
            name = "Ilya";
            age = 18;
            ID = GenerateID();
        }

        public Human(string n = " ", int a = 0)
        {
            name = n;
            age = a;
            ID = GenerateID();
        }

        public virtual void ShowInfo()
        {
            Console.WriteLine("Name:{0}", name);
            Console.WriteLine("Age:{0}", age);
            Console.WriteLine("ID:{0}", ID);
            Console.WriteLine("");
        }






        protected static string GenerateID()
        {
            return Guid.NewGuid().ToString();
        }


        public override string ToString()
        {
            return ($"Name: {name}\nAge: {age}\nID: {ID}\n");
        }
    }
}

