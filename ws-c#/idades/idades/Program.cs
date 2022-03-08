﻿// See https://aka.ms/new-console-template for more information
using System.Globalization;

CultureInfo CI = CultureInfo.InvariantCulture;

string nome1, nome2;
int idade1, idade2;
double media;

Console.WriteLine("Dados da primeira pessoa: ");
Console.Write("Nome: ");
nome1 = Console.ReadLine();
Console.Write("Idade: ");
idade1 = int.Parse(Console.ReadLine());

Console.WriteLine("Dados da segunda pessoa: ");
Console.Write("Nome: ");
nome2 = Console.ReadLine();
Console.Write("Idade: ");
idade2 = int.Parse(Console.ReadLine());

media = (double)(idade1 + idade2) / 2;
Console.WriteLine("A idade média de " + nome1 + " e " + nome2 + " é de " + media.ToString("F1", CI));
