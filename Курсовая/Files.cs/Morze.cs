using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Курсач
{
    class Morze
    {
        static public bool decInputChecker(string str)
        {
            for(int i = 0; i < str.Length; i++)
            {
                if(str[i]!=' ' && str[i]!='.' && str[i]!='-')
                {
                    return false;
                }
            }

            return true;
        }

        static public bool encInputChecker(string str)
        {
            for(int i = 0; i < str.Length; i++)
            {
                if(!CustomBools.isAlpha(str[i]) && !CustomBools.isNumeric(str[i]) && str[i] != ' ')
                {
                    return false;
                }
            }
            return true;
        }

        static public string encrypt(string str)
        {

            string[] morzeTable = new string[36];
            morzeTable[0] = "-----";//Азбука Морзе для Цифр
            morzeTable[1] = ".----";
            morzeTable[2] = "..---";
            morzeTable[3] = "...--";
            morzeTable[4] = "....-";
            morzeTable[5] = ".....";
            morzeTable[6] = "-....";
            morzeTable[7] = "--...";
            morzeTable[8] = "---..";
            morzeTable[9] = "----.";

            morzeTable[10] = ".-"; //A
            morzeTable[11] = "-...";  //B
            morzeTable[12] = "-.-.";  //C
            morzeTable[13] = "-..";  //D
            morzeTable[14] = ".";  //E
            morzeTable[15] = "..-.";  //F
            morzeTable[16] = "--.";  //G
            morzeTable[17] = "....";  //H
            morzeTable[18] = "..";  //I
            morzeTable[19] = ".---";  //J
            morzeTable[20] = "-.-";  //K
            morzeTable[21] = ".-..";  //L
            morzeTable[22] = "--";  //M
            morzeTable[23] = "-.";  //N
            morzeTable[24] = "---";  //O
            morzeTable[25] = ".--.";  //P
            morzeTable[26] = "--.-";  //Q
            morzeTable[27] = ".-.";  //R
            morzeTable[28] = "...";  //S
            morzeTable[29] = "-";  //T
            morzeTable[30] = "..-";  //U
            morzeTable[31] = "...-";  //V
            morzeTable[32] = ".--";  //W
            morzeTable[33] = "-..-";  //X
            morzeTable[34] = "-.--";  //Y
            morzeTable[35] = "--..";  //Z
            string solution = "";
            for(int i = 0; i < str.Length; i++)
            {
                if(str[i] == ' ')
                {
                    solution += "  ";
                }
                else if(str[i] < 58)
                {
                    solution += morzeTable[str[i] - 48];
                    solution += " ";
                }
                else
                {
                    solution += morzeTable[str[i] - 55];
                    solution += " ";
                }
            }





            return solution;
        }


        static public string decrypt(string str)
        {
            string[] words = str.Split(new char[] { ' ' });

            string[] morzeTable = new string[36];
            morzeTable[0] = "-----";//Азбука Морзе для Цифр
            morzeTable[1] = ".----";
            morzeTable[2] = "..---";
            morzeTable[3] = "...--";
            morzeTable[4] = "....-";
            morzeTable[5] = ".....";
            morzeTable[6] = "-....";
            morzeTable[7] = "--...";
            morzeTable[8] = "---..";
            morzeTable[9] = "----.";

            morzeTable[10] = ".-"; //A
            morzeTable[11] = "-...";  //B
            morzeTable[12] = "-.-.";  //C
            morzeTable[13] = "-..";  //D
            morzeTable[14] = ".";  //E
            morzeTable[15] = "..-.";  //F
            morzeTable[16] = "--.";  //G
            morzeTable[17] = "....";  //H
            morzeTable[18] = "..";  //I
            morzeTable[19] = ".---";  //J
            morzeTable[20] = "-.-";  //K
            morzeTable[21] = ".-..";  //L
            morzeTable[22] = "--";  //M
            morzeTable[23] = "-.";  //N
            morzeTable[24] = "---";  //O
            morzeTable[25] = ".--.";  //P
            morzeTable[26] = "--.-";  //Q
            morzeTable[27] = ".-.";  //R
            morzeTable[28] = "...";  //S
            morzeTable[29] = "-";  //T
            morzeTable[30] = "..-";  //U
            morzeTable[31] = "...-";  //V
            morzeTable[32] = ".--";  //W
            morzeTable[33] = "-..-";  //X
            morzeTable[34] = "-.--";  //Y
            morzeTable[35] = "--..";  //Z
            bool addbreak = false;
            string solution = "";
            foreach (string output in words)
            {
                if(addbreak)
                {
                    addbreak = false;
                    continue;
                }
                Console.WriteLine(output);
                for(int i = 0; i < 36; i++)
                {
                    
                    if (output == morzeTable[i])
                    {
                        if(i < 10)
                        {
                            solution += i;
                            break;
                        }
                        else
                        {
                            solution += Convert.ToChar(i + 55);
                            break;
                        }
                    }
                    if(output == "")
                    {
                        solution += " ";
           
                        break;
                        
                    }
                }
     
            }


            return solution;
        }
    }
}
