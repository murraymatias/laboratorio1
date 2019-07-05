using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp3
{
    class Musico
    {
        public string nombre;
        public string apellido;
        public int edad;
        public Orquesta orquesta;
        public Instrumento instrumento;

        public Musico()
        {
            this.nombre = "Sin nombre";
            this.apellido = "Sin apellido";
            this.edad = 0;
        }

        public Musico(string nombre,string apellido, int edad,Orquesta orquesta,Instrumento instrumento)
        {
            this.nombre = nombre;
            this.apellido = apellido;
            this.edad = edad;
            this.orquesta = orquesta;
            this.instrumento = instrumento;
        }

        public void ImprimirMusico()
        {
            Console.WriteLine("Nombre musico: {0}, Apellido: {1}, Edad: {2}", this.nombre, this.apellido, this.edad.ToString());
            this.orquesta.ImprimirOrquesta();
            this.instrumento.ImprimirInstrumento();
        }
    }
}
