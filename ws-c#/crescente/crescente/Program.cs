using System.Globalization;

CultureInfo CI = CultureInfo.InvariantCulture;

double x, y;

Console.WriteLine("Digite dois numeros:");
x = double.Parse(Console.ReadLine());
y = double.Parse(Console.ReadLine());

while (x != y)
{
    if (x < y)
    {
        Console.WriteLine("Crescente!");
    }
    else
    {
        Console.WriteLine("Decrescente!");
    }
    Console.WriteLine("Digite dois numeros:");
    x = double.Parse(Console.ReadLine());
    y = double.Parse(Console.ReadLine());
}