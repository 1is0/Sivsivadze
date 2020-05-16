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
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
            ControlBox = false;
        }
        private void Form2_Load(object sender, EventArgs e)
        {
           
        }

        private void button1_Click(object sender, EventArgs e)
        {
            CustomBools.secondFormOpened = false;
            Close();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            textBox2.Text = "";
            if (!CustomBools.alphaChecker(textBox1.Text))
            {
                textBox2.Text = "Неверный ввод";
                return;
            }
            if (!CustomBools.numericChecker(textBox4.Text))
            {
                textBox2.Text = "Неверный ввод";
                return;
            }
            textBox2.Text = ROT1.encrypt(CustomBools.myToUpper(textBox1.Text), Convert.ToInt32(textBox4.Text)%26);
  
        }

        private void button3_Click(object sender, EventArgs e)
        {
            textBox2.Text = "";
            if (!CustomBools.alphaChecker(textBox1.Text))
            {
                textBox2.Text = "Неверный ввод";
                return;
            }
            if (!CustomBools.numericChecker(textBox4.Text))
            {
                textBox2.Text = "Неверный ввод";
                return;
            }
            
            textBox2.Text = ROT1.decrypt(CustomBools.myToUpper(textBox1.Text), Convert.ToInt32(textBox4.Text) % 26);
        }
    }
}
