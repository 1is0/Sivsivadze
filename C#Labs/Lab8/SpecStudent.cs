using System;
using System.Collections.Generic;
using System.Text;

namespace _3rdCsharp
{
    class SpecStudent :Student, Interface1
    {
        
        public struct Exams
        {
            public string subject;
            public DateTime date;
        }
        public Exams exams;
        public courseNum courseNum;
        public SpecialtyName specialtyName;
        public SpecStudent(courseNum z,SpecialtyName k,string n = "N/A", int a = 0, string l = "N/A", DateTime m = default, string b = "N/A")
        {
            name = n;
            age = a;
            courseNum = z;
            specialtyName = k;
            exams.subject = l;
            exams.date = m;
            hobbie = b;
            ID = GenerateID();
        }
        public delegate void lr8event(string message);
        public event lr8event _123123;
        
        public void showAge()
        {
            _123123?.Invoke($"Age:{age}");
        }
        public override void ShowInfo()
        {
            
            Console.WriteLine("Course:{0}", courseNum);
            Console.WriteLine("ID:{0}", ID);
            Console.WriteLine("Speciality Name:{0}", specialtyName);
            hobbieName();
            Console.WriteLine("Examination:{0}", exams.subject);
            Console.WriteLine("Date:{0}", exams.date);
        
            Console.WriteLine("");
        }
        public void hobbieName()
        {
            Console.WriteLine("Hobbie:{0}", hobbie);
        }
    }
}
