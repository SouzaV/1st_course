using System.Globalization;

CultureInfo CI = CultureInfo.InvariantCulture;

int a, b, c;

Console.Write("Primeiro valor: ");
a = int.Parse(Console.ReadLine());
Console.Write("Segundo valor: ");
b = int.Parse(Console.ReadLine());
Console.Write("Tercero valor: ");
c = int.Parse(Console.ReadLine());

if ((a < b) && (a < c))
{
    Console.WriteLine("MENOR = " + a);
}
else if (b < c)
{
    Console.WriteLine("MENOR = " + b);
}
else
{
    Console.WriteLine("MENOR = " + c);
}