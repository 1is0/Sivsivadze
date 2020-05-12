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
            for (int i = 0; i < textBox1.Text.Length; i++)
            {
                if (!CustomBools.isAlpha(textBox1.Text[i]))
                {
                    textBox2.Text = "Неверный ввод";
                    textBox2.Visible = true;
                    return;
                }
            }
            if(radioButton1.Checked)
            {
                if(!Int32.TryParse(textBox3.Text, out int a))
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
                    textBox1.Text = ROT1.encrypt(textBox1.Text, Convert.ToInt32(textBox3.Text));
                }
                else if (comboBox1.Text == "Расшифровать")
                {
                    textBox1.Text = ROT1.decrypt(textBox1.Text, Convert.ToInt32(textBox3.Text));
                }
            }
            if(radioButton2.Checked)
            {
                if(textBox3.Text.Length > textBox1.Text.Length)
                {
                    textBox2.Text = "Неверный ввод";
                    textBox2.Visible = true;
                    return;
                }
           
                if (comboBox1.Text == "Зашифровать")
                {
                    textBox1.Text = Vigenere.encrypt(CustomBools.myToUpper(textBox1.Text), CustomBools.myToUpper(textBox3.Text));
                }
            }
            
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            CustomBools.myToUpper(textBox1.Text);
        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {

            






            textBox2.Visible = false;
            textBox4.Visible = false;
            comboBox1.Text = "Выберите действие";
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void maskedTextBox1_MaskInputRejected(object sender, MaskInputRejectedEventArgs e)
        {

        }

        private void radioButton1_CheckedChanged(object sender, EventArgs e)
        {
            if(radioButton1.Checked)
            {
                textBox4.Text = "Введите значение сдвига (Целое число > 0)";
                textBox4.Visible = true;
            }
        }

        private void radioButton2_CheckedChanged(object sender, EventArgs e)
        {
            if (radioButton2.Checked)
            {
                textBox4.Text = "Введите ключевое слово";
                textBox4.Visible = true;
            }
        }

        private void textBox3_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox4_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox5_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
