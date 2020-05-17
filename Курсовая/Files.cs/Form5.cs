using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Курсач
{
    public partial class Form5 : Form
    {
        public Form5()
        {
            InitializeComponent();
            ControlBox = false;
        }




        private void button1_Click(object sender, EventArgs e)
        {
            CustomBools.secondFormOpened = false;
            Close();
        }



        private void Form5_Load(object sender, EventArgs e)
        {
            
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if(inputBox.Text.Length!=keyBox.Text.Length)
            {
                outputBox.Text = "Неверный ввод";
                return;
            }
            if(!CustomBools.alphaChecker(inputBox.Text) && !CustomBools.alphaChecker(keyBox.Text))
            {
                outputBox.Text = "Неверный ввод";
                return;
            }
            outputBox.Text = Vernam.encrypt(CustomBools.myToUpper(inputBox.Text), CustomBools.myToUpper(keyBox.Text));
        }

        private void button3_Click(object sender, EventArgs e)
        {
            int n = keyBox.Text.Length;
            string[] words = inputBox.Text.Split(new char[] { ' ' });

            if (words.Length != keyBox.Text.Length)
            {
                outputBox.Text = "Неверный ввод";
                return;
            }
            for (int i = 0; i < words.Length; i++)
            {
                Console.WriteLine(words[i]);
            }
            for(int i = 0; i < n; i++)
            {
                if (!CustomBools.isNumeric(inputBox.Text[i]) && !CustomBools.isSpace(inputBox.Text[i]))
                {
                    outputBox.Text = "Неверный ввод";
                    return;
                }
            }






            outputBox.Text = Vernam.decrypt(inputBox.Text, CustomBools.myToUpper(keyBox.Text));
        }
    }
}
