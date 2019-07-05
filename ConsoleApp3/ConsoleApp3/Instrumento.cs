using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp3
{
    class Instrumento
    {
        public string nombre;
        public string tipoIntrumento;

        public Instrumento()
        {
            this.nombre = "Sin nombre";
            this.tipoIntrumento = "Sin tipo";
        }

        public Instrumento(string nombre,string tipo)
        {
            this.nombre = nombre;
            this.tipoIntrumento = tipo;
        }

        public void ImprimirInstrumento()
        {
            Console.WriteLine("Nombre: {0}, Tipo: {1}", this.nombre, this.tipoIntrumento);
            Console.ReadLine();
        }
    }
}
