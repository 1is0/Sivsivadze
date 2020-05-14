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


    public partial class Form1 : Form
    {

        public Form1()
        {
            InitializeComponent();           
        }

        private void proceedButton_Click(object sender, EventArgs e)
        {
            textBox2.Visible = false;


            if (comboBox1.Text == "Выберите действие")
            {         
                textBox2.Text = "Выберите действие";
                textBox2.Visible = true;
                return;
            }
            if(!radioButton1.Checked && !radioButton2.Checked && !radioButton3.Checked && !radioButton4.Checked)
            {
                textBox2.Text = "Выберите тип шифрования";
                textBox2.Visible = true;
                return;
            }
            if(radioButton1.Checked)
            {
               
                if (!Int32.TryParse(textBox3.Text, out int a))
                {
                    textBox2.Text = "Неверный ввод";
                    textBox2.Visible = true;
                    return;
                }
                else
                if(Convert.ToInt32(textBox3.Text) < 0)
                {
                    textBox2.Text = "Неверный ввод";
                    textBox2.Visible = true;
                    return;
                }
                if (comboBox1.Text == "Зашифровать")
                {
                    outputBox.Text = ROT1.encrypt(CustomBools.myToUpper(textBox1.Text), Convert.ToInt32(textBox3.Text) % 26);
                }
                else
                {
                    outputBox.Text = ROT1.decrypt(CustomBools.myToUpper(textBox1.Text), Convert.ToInt32(textBox3.Text) % 26);
                }
            }
            if(radioButton2.Checked)
            {
                if (Vigenere.inputChecker(textBox1.Text) && Vigenere.inputChecker(textBox3.Text))
                {

                    if (comboBox1.Text == "Зашифровать")
                    {
                        outputBox.Text = Vigenere.encrypt(CustomBools.myToUpper(textBox1.Text), CustomBools.myToUpper(textBox3.Text));
                    }
                    else
                    {
                        outputBox.Text = Vigenere.decrypt(CustomBools.myToUpper(textBox1.Text), CustomBools.myToUpper(textBox3.Text));
                    }
                }
                else
                {
                    textBox2.Text = "Неверный ввод";
                    textBox2.Visible = true;
                    return;
                }
            }
            if(radioButton3.Checked)
            {
                if(comboBox1.Text == "Зашифровать")
                {
                   if(!Morze.encInputChecker(textBox1.Text))
                   {
                        textBox2.Text = "Неверный ввод";
                        textBox2.Visible = true;
                        return;
                   }
                   else
                    {
                        outputBox.Text = Morze.encrypt(textBox1.Text);
                    }
                }
                else
                {
                    if (!Morze.decInputChecker(CustomBools.myToUpper(textBox1.Text)))
                    {
                        textBox2.Text = "Неверный ввод";
                        textBox2.Visible = true;
                        return;
                    }
                    else
                    {
                        outputBox.Text = Morze.decrypt(textBox1.Text);
                    }
                }
                
            }
       
        }


        private void Form1_Load(object sender, EventArgs e)
        {

            textBox3.Visible = false;
            textBox5.Visible = true;
            textBox2.Visible = false;
            textBox4.Visible = false;
            comboBox1.Text = "Выберите действие";
        }


        private void radioButton1_CheckedChanged(object sender, EventArgs e)
        {
            if(radioButton1.Checked)
            {
                textBox5.Text = "Введите текст(только латинские буквы, без пробелов)";
                textBox5.Visible = true;
                textBox3.Visible = true;
                textBox4.Text = "Введите значение сдвига (Целое число > 0)";
                textBox4.Visible = true;
            }
        }

        private void radioButton2_CheckedChanged(object sender, EventArgs e)
        {
            if (radioButton2.Checked)
            {
                textBox5.Text = "Введите текст(только латинские буквы, без пробелов)";
                textBox5.Visible = true;
                textBox3.Visible = true;
                textBox4.Text = "Введите ключевое слово";
                textBox4.Visible = true;
            }
        }



        private void radioButton3_CheckedChanged(object sender, EventArgs e)
        {
            if (radioButton3.Checked)
            {
                if(comboBox1.Text == "Зашифровать")
                {
                    textBox5.Text = "Введите текст(латинские буквы и цифры)";
                    textBox5.Visible = true;
                }
                else
                {
                    textBox5.Text = "Введите текст на азбуке морзе(один пробел между буквами, три - между словами)";
                    textBox5.Visible = true;
                }
               


                textBox3.Visible = false;
                textBox4.Text = "Введите ключевое слово";
                textBox4.Visible = false;
            }
        }
    }
}
