using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WindowsFormsApp1
{
    class Numero
    {
        private double numero;


        public void setNumero(double numero) {
            this.numero = numero;
        }

        public double getNumero() {
            return this.numero;
        }

        private static double ValidarNumero(string numero) {
            double retorno;
            if(!double.TryParse(numero,out retorno))
            {
                retorno = 0;
            }
            return retorno;
        }

        public Numero(double numero)
        {
            this.numero = numero;
        }

        public Numero(string numero)
        {
            this.numero = Numero.ValidarNumero(numero);
        }

        public static double SumarNumeros(Numero n1, Numero n2)
        {
            double retorno;
            retorno = n1.numero + n2.numero;
            return retorno;
        }

        public double Sumar(Numero n1)
        {
            return this.numero + n1.numero;
        }
    }
}
