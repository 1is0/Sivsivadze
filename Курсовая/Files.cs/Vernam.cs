using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Курсач
{
    class Vernam
    {
        static public string encrypt(string word, string key)
        {
            string solution = "";
            int[,] wordArray = new int[word.Length, 8];
            int[,] keyArray = new int[word.Length, 8];
            string[] tempArray = new string[word.Length];
            string temp;
            for(int i = 0; i < word.Length; i++)
            {
                tempArray[i] = CustomBools.convertToBinary(word[i]);
            }

            for(int i = 0; i < word.Length; i++)
            {
                temp = tempArray[i];
                for(int j = 0; j < 8; j++)
                {
                    wordArray[i, j] = Convert.ToInt32(temp[j]) - 48;
                }
            }

            for (int i = 0; i < word.Length; i++)
            {
                tempArray[i] = CustomBools.convertToBinary(key[i]);
            }

            for (int i = 0; i < word.Length; i++)
            {
                temp = tempArray[i];
                for (int j = 0; j < 8; j++)
                {
                    keyArray[i, j] = Convert.ToInt32(temp[j]) - 48;
                }
            }
            for (int i = 0; i < word.Length; i++)
            {
                temp = "";
                for (int j = 0; j < 8; j++)
                {
                    if(wordArray[i,j] == keyArray[i,j])
                    {
                        temp += '0';
                    }
                    else
                    {
                        temp += '1';
                    }
                    
                }
                solution += Convert.ToString(CustomBools.convertToDecimal(temp)) + ' ';
            }
                    return solution;
        }
        static public string decrypt(string word, string key)
        {
            string trueWord = "";
            string[] words = word.Split(new char[] { ' ' });
            for (int i = 0; i < key.Length; i++)
            {
                Console.WriteLine(words[i]);
            }
            for (int i = 0; i < key.Length; i++)
            {
                trueWord += Convert.ToChar(Convert.ToInt32(words[i]));
            }

            string solutionInts = encrypt(trueWord, key);
            string solution = "";
            string[] words1 = solutionInts.Split(new char[] { ' ' });
            for (int i = 0; i < key.Length; i++)
            {
                solution += Convert.ToChar(Convert.ToInt32(words1[i]));
            }
            return solution;
        }
    }
}
