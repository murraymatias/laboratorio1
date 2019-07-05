using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void btnSuma_Click(object sender, EventArgs e)
        {
            string numero1 = this.txbUno.Text;
            string numero2 = this.txbDos.Text;
            Numero n1 = new Numero(numero1);
            Numero n2 = new Numero(numero2);
            double resultado = Numero.SumarNumeros(n1, n2);

            this.txbResultado.Text = resultado.ToString();
        }
    }
}
