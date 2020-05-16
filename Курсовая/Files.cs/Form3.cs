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
    public partial class Form3 : Form
    {
        public Form3()
        {
            InitializeComponent();
            ControlBox = false;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (!CustomBools.alphaChecker(textBox1.Text) || !CustomBools.alphaChecker(textBox4.Text))
            {
                textBox2.Text = "Неверный ввод";
                return;
            }
            textBox2.Text = Vigenere.encrypt(CustomBools.myToUpper(textBox1.Text), CustomBools.myToUpper(textBox4.Text));
        }

        private void button1_Click(object sender, EventArgs e)
        {
            CustomBools.secondFormOpened = false;
            Close();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            if (!CustomBools.alphaChecker(textBox1.Text) || !CustomBools.alphaChecker(textBox4.Text))
            {
                textBox2.Text = "Неверный ввод";
                return;
            }
            textBox2.Text = Vigenere.decrypt(CustomBools.myToUpper(textBox1.Text), CustomBools.myToUpper(textBox4.Text));
        }
    }
}
