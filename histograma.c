//Aluno: Eduardo Zimermam Pereira GRR20152952
#include <stdio.h>
#include "random.h"
#define PARAR 1000000

int main()
{
	long long i, j;
	long long vetor[PARAR], maior_elem, aux_maior, regra;

	for (i = 0; i < PARAR; i++)
		vetor[random_cl() % 100]++; //Números são gerados e pegos os dois ultimos dígitos(mod 100) para a contagem.

	maior_elem = 0;
	for (i = 0; i <= 100; i++)
	{
		aux_maior = vetor[i];		//Calculo do numero que apareceu mais vezes em um intervalo de geração. Para ser usado na regra de 3
		if (aux_maior > maior_elem)
			maior_elem = aux_maior;
	}

	printf("   0   10   20   30   40   50   60   70   80   90   100\n");//Cabeçalhos para indentação da saida.
	printf("   +----+----+----+----+----+----+----+----+----+----+\n");

	for (i = 0; i < 100; i++)
	{
		regra = vetor[i] * 50 / maior_elem;
		if (i < 10)
			printf("%lld  |", i);		//If para indentação nos numeros menores que 10, o pipe ficava fora da linha correta sem o if.
		else
			printf("%lld |", i);
		for (j = 0; j < regra; j++)
			printf("*");			//Impressão do resultado gerando o histograma. Tudo normalizado para melhor visualização.
		printf("\n");
	}
	return(0);
}
