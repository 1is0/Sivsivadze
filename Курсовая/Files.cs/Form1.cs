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



            if (comboBox1.Text == "Choose Item")
            {         
                textBox2.Text = "Choose Item First";
                textBox2.Visible = true;
                return;
            }
            if(!radioButton1.Checked && !radioButton2.Checked && !radioButton3.Checked && !radioButton4.Checked)
            {
                textBox2.Text = "Choose Encryption Type";
                textBox2.Visible = true;
                return;
            }
            for (int i = 0; i < textBox1.Text.Length; i++)
            {
                if (!CustomBools.isAlpha(textBox1.Text[i]) && !CustomBools.isSpace(textBox1.Text[i]) && !CustomBools.isNumeric(textBox1.Text[i]))
                {
                    textBox2.Text = "Wrong input";
                    textBox2.Visible = true;
                    return;
                }
            }
            if(Convert.ToInt32(textBox3.Text)< 0)
            {
                textBox2.Text = "Wrong input";
                textBox2.Visible = true;
                return;
            }
            if(radioButton1.Checked && comboBox1.Text == "Encrypt")
            {
                textBox1.Text = ROT1.encrypt(textBox1.Text, Convert.ToInt32(textBox3.Text));
            }
            if (radioButton1.Checked && comboBox1.Text == "Decrypt")
            {
                textBox1.Text = ROT1.decrypt(textBox1.Text, Convert.ToInt32(textBox3.Text));
            }
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {
            textBox2.Visible = false;
            comboBox1.Text = "Choose Item";
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }
    }
}
