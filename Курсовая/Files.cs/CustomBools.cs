using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Курсач
{
    class CustomBools
    {
        static public bool isAlpha(char a)
        {
            if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
            {
                return true;
            }
            return false;
        }
        static public bool isSpace(char a)
        {
            if (a == 32)
            {
                return true;
            }
            return false;
        }
        static public bool isNumeric(char a)
        {
            if (a >= 48 && a <= 57)
            {
                return true;
            }
            return false;
        }
        static public bool isLower(char a)
        {
            if((a >= 97 && a <= 122))
            {
                return true;
            }
            return false;
        }
    }
}
