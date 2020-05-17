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

        private void button1_Click(object sender, EventArgs e)
        {
            if (!CustomBools.secondFormOpened)
            {
                Form2 newForm = new Form2();
                newForm.Show();
                CustomBools.secondFormOpened = true;
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
                Close();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            if (!CustomBools.secondFormOpened)
            {
                Form3 newForm = new Form3();
                newForm.Show();
                CustomBools.secondFormOpened = true;
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            if (!CustomBools.secondFormOpened)
            {
                Form4 newForm = new Form4();
                newForm.Show();
                CustomBools.secondFormOpened = true;
            }
        }

        private void button5_Click(object sender, EventArgs e)
        {
            if (!CustomBools.secondFormOpened)
            {
                Form5 newForm = new Form5();
                newForm.Show();
                CustomBools.secondFormOpened = true;
            }
        }
    }
}
