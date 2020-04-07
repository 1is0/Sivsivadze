using System;
using System.Collections.Generic;
using System.Text;

namespace _3rdCsharp
{
    class Human
    {
        public string Name { get; set; }
        public int Age { get; set; }
        public string Country { get; set; }
        protected string ID { get; set; }

        public Human()
        {
            Name = "Ilya";
            Age = 18;
            ID = GenerateID();
        }

        public Human(string n = " ", int a = 0)
        {
            Name = n;
            Age = a;
            ID = GenerateID();
        }

        protected static string GenerateID()
        {
            return Guid.NewGuid().ToString();
        }


        public override string ToString()
        {
            return ($"Name: {Name}\nAge: {Age}\nID: {ID}\n");
        }
    }
}

