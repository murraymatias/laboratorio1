using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp3
{
    class Orquesta
    {
        public string nombre;
        public string lugar;
        public string tipoOrquesta;

        public Orquesta()
        {
            this.nombre = "Sin nombre";
            this.lugar = "Lugar no asignado";
            this.tipoOrquesta = "Tipo no asignado";
        }

        public Orquesta(string nombre, string lugar, string tipo)
        {
            this.nombre = nombre;
            this.lugar = lugar;
            this.tipoOrquesta = tipo;
        }

        public void ImprimirOrquesta()
        {
            Console.WriteLine("Nombre {0}, Lugar {1}, Tipo {2}", this.nombre, this.lugar, this.tipoOrquesta);
            Console.ReadLine();
        }
    }
}
