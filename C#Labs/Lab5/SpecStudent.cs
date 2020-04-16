using System;
using System.Collections.Generic;
using System.Text;

namespace _3rdCsharp
{
    class SpecStudent :Student
    {
        string specName;

        public struct Exams
        {
            public string subject;
            public DateTime date;
        }
        public Exams exams;
        public courseNum courseNum;
        public SpecStudent(courseNum z,string n = "N/A", int a = 0, string k = "N/A", string l = "N/A", DateTime m = default)
        {
            name = n;
            age = a;
            courseNum = z;
            specName = k;
            exams.subject = l;
            exams.date = m;
            ID = GenerateID();
        }
        public override void ShowInfo()
        {
            Console.WriteLine("Name:{0}",name);
            Console.WriteLine("Age:{0}", age);
            Console.WriteLine("Course:{0}", courseNum);
            Console.WriteLine("ID:{0}", ID);
            Console.WriteLine("Speciality Name:{0}", specName);
            Console.WriteLine("Examination:{0}", exams.subject);
            Console.WriteLine("Date:{0}", exams.date);
        
            Console.WriteLine("");
        }
    }
}
