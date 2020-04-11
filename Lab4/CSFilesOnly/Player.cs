using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace lab4CHARP
{
    class Player : IDisposable 
    {
        [DllImport("winmm.dll")]
        private static extern long mciSendString(string strCommand, StringBuilder strReturn, int iReturnLength, IntPtr hwndCallback);

        public Player(string fileName)
        {
            const string FORMAT = @"open ""{0}"" type mpegvideo alias MediaFile";
            string command = String.Format(FORMAT, fileName);
            mciSendString(command, null, 0, IntPtr.Zero);
        }
        public void Play()
        {
            string command = "play MediaFile";
            mciSendString(command, null, 0, IntPtr.Zero);
        }
        public void Stop()
        {
            string command = "stop MediaFile";
            mciSendString(command, null, 0, IntPtr.Zero);
        }

        


        public void Dispose()
        {
            string command = "close MediaFile";
            mciSendString(command, null, 0, IntPtr.Zero);
        }
    }
}
