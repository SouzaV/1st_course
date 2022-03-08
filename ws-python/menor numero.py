N = int(input("Quantos numeros serão digitados? "))

vet : [int] = [0 for i in range (N)]

for i in range (0,N):
    vet[i] = int(input(f"Digite o {i+1}º numero:"))

menor = vet[0]
for i in range (0,N):
    if vet[i] < menor:
        menor = vet[i]

print(f"O menor numero digitado é: {menor}")
