using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace TestWinformCSharp
{
    public partial class Form1 : Form
    {
        [DllImport("MyLib.dll", EntryPoint = "AddMe", CallingConvention = CallingConvention.Cdecl)]
        public static extern int AddMe(int a); //ref

        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int count = 100000000;
            ctime.Text = string.Empty;
            csharptime.Text = string.Empty;

            DateTime dt1 = DateTime.Now;
            int iResult1 = AddMe(count);
            DateTime dt2 = DateTime.Now;
            int iResult2 = AddMa(count);
            DateTime dt3 = DateTime.Now;

            ctime.Text = string.Format("Result:{0} Time:{1}ms", iResult1,(dt2- dt1).TotalMilliseconds);
            csharptime.Text = string.Format("Result:{0} Time:{1}ms", iResult2, (dt3 - dt2).TotalMilliseconds);
        }

        public int AddMa(int a)
        {
            int rs = 0;
            if (a > 0)
            {
                int i = 0;
                while (i <= a)
                {
                    rs += i;
                    i++;
                }
            }
            else
            {
                rs = 0;
            }
            return rs;
        }
    }
}
