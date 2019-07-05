using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace ConsoleApp3
{
    class Program
    {
        static void Main(string[] args)
        {
            Orquesta orquesta1 = new Orquesta();
            orquesta1.ImprimirOrquesta();
            Orquesta orquesta2 = new Orquesta("Orquesta2", "lugarS", "Sinfonica");
            orquesta2.ImprimirOrquesta();

            Instrumento instrumento1 = new Instrumento("Asd", "asd");

            Musico m1 = new Musico("Aas", "asd", 45, orquesta2, instrumento1);
            m1.ImprimirMusico();

            ArrayList listaOrquesta = new ArrayList();
            listaOrquesta.Add(orquesta1);
            listaOrquesta.Add(orquesta2);

            Console.WriteLine("Bucle for");
            foreach(Orquesta elemento in listaOrquesta)
            {
                elemento.ImprimirOrquesta();
            }
        }
    }
}
