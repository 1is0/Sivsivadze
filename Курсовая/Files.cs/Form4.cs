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
    public partial class Form4 : Form
    {
        public Form4()
        {
            InitializeComponent();
            ControlBox = false;
        }











        private void button1_Click(object sender, EventArgs e)
        {
            CustomBools.secondFormOpened = false;
            Close();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (Morze.encInputChecker(textBox1.Text))
            {
                textBox2.Text = Morze.encrypt(CustomBools.myToUpper(textBox1.Text));
            }
            else
            {
                textBox2.Text = "Неверный ввод";
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            if (Morze.decInputChecker(textBox1.Text))
            {
                textBox2.Text = Morze.decrypt(textBox1.Text);
            }
            else
            {
                textBox2.Text = "Неверный ввод";
            }
        }
    }
}
