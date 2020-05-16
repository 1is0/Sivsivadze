using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Курсач
{
    class ROT1
    {

        public static string encrypt(string str, int n)
        {
            string str2="";

            for(int i = 0; i < str.Length; i++)
            {   if(CustomBools.isSpace(str[i]))
                {
                    str2 += " ";
               }
                    else
                    if (str[i] + n > 90)
                    {
                        str2 += Convert.ToChar(str[i] - 26 + n);
                    }
                    else
                    {
                        str2 += Convert.ToChar(str[i] + n);
                    }

               
            }
            return str2;
        }


        public static string decrypt(string str, int n)
        {
            string str2 = "";
           for (int i = 0; i < str.Length; i++)
            {

                if (CustomBools.isSpace(str[i]))
                {
                    str2 += " ";
                }
                else 
                if (str[i] - n <65)
                {
                    str2 += Convert.ToChar(str[i] + 26 - n);
                }             
                    else
                    {
                        str2 += Convert.ToChar(str[i] - n);
                    }
                
            }
                return str2;
        }

    }
}
