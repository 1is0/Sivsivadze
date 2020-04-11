using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace lab4CHARP
{
    public partial class Form1 : Form
    {
        private Player _player;
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void openButton_Click(object sender, EventArgs e)
        {
            using(OpenFileDialog dlgOpen = new OpenFileDialog())
            {
                dlgOpen.Filter = "Mp3 File|*.mp3";
                dlgOpen.InitialDirectory = Environment.GetFolderPath(Environment.SpecialFolder.MyMusic);

                if(dlgOpen.ShowDialog() == System.Windows.Forms.DialogResult.OK)
                {
                    _player = new Player(dlgOpen.FileName);
                }
            }
        }

        private void playButton_Click(object sender, EventArgs e)
        {
            if (_player != null)
            _player.Play();
        }
        private void stopButton_Click(object sender, EventArgs e)
        {
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void closeButton_Click(object sender, EventArgs e)
        {
            if (_player != null)
                _player.Dispose();
        }
    }
}
    