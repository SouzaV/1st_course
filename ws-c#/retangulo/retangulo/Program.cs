// See https://aka.ms/new-console-template for more information
using System.Globalization;

CultureInfo CI = CultureInfo.InvariantCulture;

double basee, altura, area, perimetro, diagonal;

Console.WriteLine("Base do retangulo: ");
basee = double.Parse(Console.ReadLine(), CI);
Console.WriteLine("Altura do retangulo: ");
altura = double.Parse(Console.ReadLine(), CI);

area = basee * altura;
Console.WriteLine("AREA = "+ area.ToString("F4", CI));

perimetro = 2 * (basee + altura);
Console.WriteLine("PERIMETRO = " + perimetro.ToString("F4", CI));

diagonal = Math.Sqrt(Math.Pow(basee, 2.0) + Math.Pow(altura, 2.0));
Console.WriteLine("DIAGOAL = " + diagonal.ToString("F4", CI));