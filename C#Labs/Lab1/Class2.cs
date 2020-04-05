using System;
using System.Collections.Generic;
using System.Text;

namespace _1stCsharp
{
    class Object
    {
        int size;
        double value;
        double valuePerSlot;



        public void SetSize(int a)
        {
            size = a;
            return;
        }
        public int GetSize()
        {
            return size;
        }

        public void SetValue(double a)
        {
            value = a;
            return;
        }
        public double GetValue()
        {
            return value;
        }

        public void SetValuePerSlot(double a)
        {
            valuePerSlot = a;
            return;
        }
        public double GetValuePerSlot()
        {
            return valuePerSlot;
        }

    }
}
