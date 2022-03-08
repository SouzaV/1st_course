#include <stdio.h>
#include <stdlib.h>

void ler_texto(char *buffer, int length)
{
 fgets(buffer, length, stdin);
 strtok(buffer, "\n");
}

void limpar_entrada()
{
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    int N,i,cont;
    double soma, media, porcentagem;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &N);

    char nomes[N][50];
    int idades[N];
    double alturas[N];

    for (i = 0; i < N; i++)
    {
        printf("Daddos da %da pessoa:\n",i+1);
        printf ("Nome: ");
        limpar_entrada();
        ler_texto(nomes[i],50);
        printf("Idade: ");
        scanf("%d", &idades[i]);
        printf("Altura: ");
        scanf("%lf", &alturas[i]);
    }

    soma = 0;
    for (i = 0;i < N; i++)
    {
        soma = soma + alturas[i];
    }

    media = soma / N;
    printf("\nAltura media: %.2lf\n", media);

    cont = 0;
    for (i = 0; i < N; i++)
    {
        if (idades[i] < 16)
        {
            cont++;
        }
    }
    porcentagem = cont * 100 / N;
    printf("Pessoas com menos de 16 anos: %.1lf%%\n", porcentagem);

    for (i = 0; i < N; i++)
    {
        if (idades[i] < 16)
        {
            printf("%s", nomes[i]);
        }
    }
    return 0;
}
