using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Курсач
{
    class CustomBools
    {
        public static bool secondFormOpened = false;


        public static bool alphaChecker(string str)
        {
            for (int i = 0; i < str.Length; i++)
            {
                if (!CustomBools.isAlpha(str[i]))
                {
                    return false;
                }
            }
            return true;

        }

        public static bool spaceChecker(string str)
        {
            for (int i = 0; i < str.Length; i++)
            {
                if (!CustomBools.isSpace(str[i]))
                {
                    return false;
                }
            }
            return true;
        }
        public static bool numericChecker(string str)
        {
            for (int i = 0; i < str.Length; i++)
            {
                if (!CustomBools.isNumeric(str[i]))
                {
                    return false;
                }
            }
            return true;
        }

        public static string convertToBinary(int a)
        {
            string str = "";
            while (a > 0)
            {
                str = Convert.ToString(a % 2) + str;
                a /= 2;
            }
            while(str.Length!=8)
            {
                str = '0' + str;
            }
            return str;
        }


        public static int convertToDecimal(string a)
        {
        int degree = 0;
        int solution = 0;
            for(int i = 7; i >=0; i--)
            {
                if(a[i] == '1')
                {
                    solution += Convert.ToInt32(Math.Pow(2, degree));
                   
                }
                degree++;
            }
            return solution;
        }










        static public bool isAlpha(char a)
        {
            if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122) || a ==' ')
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
        static public bool isUpper(char a)
        {
            if ((a >= 65 && a <= 90))
            {
                return true;
            }
            return false;
        }

        static public string myToUpper(string a)
        {
            string b = "";
            for(int i = 0; i < a.Length; i++)
            {
                if(isLower(a[i]))
                {
                    b += Convert.ToChar(a[i] - 32);
                }
                else
                {
                    b += Convert.ToString(a[i]);
                }
            }
            return b;
        }


    }
}
