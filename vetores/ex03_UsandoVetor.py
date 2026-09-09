
float vetor[5]
maior,menor = 0,0
soma = 0
for i in range(5):
    vetor[i] = float(input(f"Digite o numero de elemento {i+1}:"))
    if (maior < vetor[i]):
        maior = vetor[i]
    elif (menor > vetor[i]):
        menor = vetor[i]
    soma += vetor[i]
media = soma / 5

print(f"O maior numero digitado foi: {maior}")
print(f"O menor numero digitado foi: {menor}")
print(f"A media dos numeros digitados foi: {media}")

n = float(input("Digite um numero para verificar se ele esta no vetor:"))
if n in vetor:
    print(f"O numero {n} esta no vetor.")
else:
    print(f"O numero {n} nao esta no vetor.")