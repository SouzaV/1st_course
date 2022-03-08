#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N,i,cont;
    double soma, media, porcentagem;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> N;

    string nomes[N];
    int idades[N];
    double alturas[N];

    for (i = 0; i < N; i++)
    {
        cout << "Daddos da " << i+1 << "a pessoa:\n";
        cout << "Nome: ";
        cin.ignore(INT_MAX,'\n');
        getline(cin, nomes[i]);
        cout <<"Idade: ";
        cin >> idades[i];
        cout << "Altura: ";
        cin >> alturas[i];
    }

    soma = 0;
    for (i = 0; i < N; i++)
    {
        soma = soma + alturas[i];
    }

    media = ((double)soma / N);
    cout << fixed << setprecision(2);
    cout << "Altura media: " << media << endl;

    cont = 0;
    for (i = 0; i < N; i++)
    {
        if (idades[i] < 16)
        {
            cont++;
        }
    }

    porcentagem = ((double)cont * 100 / N);
    cout << fixed << setprecision(1);
    cout << "Pessoas com menos de 16 anos: " << porcentagem << "%" << endl;

    for (i = 0; i < N; i++)
    {
        if (idades[i] < 16)
        {
            cout << nomes[i] << endl;
        }
    }
    return 0;
}
