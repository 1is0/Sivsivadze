using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Курсач
{
    class Vigenere
    {
        public static string encrypt(string str, string keyinput)
        {
            string solution="";
            string key = "";
            string[] array = new string[26];
            string[,] table= new string[26, 26];
            table[0, 0] = "A";

            for(int i = 1; i < 26; i ++)
            {
                table[0, i] = ROT1.encrypt(table[0, i - 1], 1);
                table[i, 0] = ROT1.encrypt(table[i - 1, 0], 1);
            }
            for(int i = 1; i < 26; i++)
            {
                for(int j = 1; j < 26; j++)
                {
                    table[i, j] = ROT1.encrypt(table[i, j - 1], 1);
                }
            }
            if (str.Length / keyinput.Length == 1 && str.Length % keyinput.Length == 0)
            {
                key = str;
            }
            else
            {
                for(int i = 0; i < str.Length/keyinput.Length; i++)
                {
                    for(int j = 0; j <keyinput.Length; j++)
                    {
                        key += keyinput[j];
                    }
                }
                for(int i = 0; i < str.Length%keyinput.Length; i++)
                {
                    key += keyinput[i];
                }
            }
           for(int i = 0; i < key.Length; i++)
            {
                solution += table[Convert.ToInt32(key[i]) - 65, Convert.ToInt32(str[i]) - 65];
            }



            return solution;
        }
    }
}
