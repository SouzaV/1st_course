using System.Globalization;

CultureInfo CI = CultureInfo.InvariantCulture;

int N, i;
double soma, media;

Console.Write("Qauntos numeros você vai digitar? ");
N = int.Parse(Console.ReadLine());

double[] vet = new double[N];
for (i = 0; i < N; i++)
{
    Console.Write("Digite um numero: ");
    vet[i] = double.Parse(Console.ReadLine());
}
Console.WriteLine();

Console.Write("Valores = ");
for (i = 0; i < N; ++i)
{
    Console.Write(vet[i].ToString("F1", CI) + " ");
}

soma = 0;
for (i = 0; i < N; i++)
{
    soma = soma + vet[i];
}
Console.WriteLine("\nSoma = " + soma.ToString("F2", CI));

media = soma / N;
Console.WriteLine("Média = " + media.ToString("F2", CI));
