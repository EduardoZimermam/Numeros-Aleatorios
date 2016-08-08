//Aluno: Eduardo Zimermam Pereira GRR20152952
#include "random.h"

#define a 40692
#define c 127
#define m 10000000

long long seed = 0;

//------------------------------------------------------------------------------
/*Função para gerar o número pseudo-aleatório.*/
long long random_cl()
{
	seed = (a * seed + c) % m;
	return(seed);
}

//------------------------------------------------------------------------------
/*Função para alteração da semente(seed) na função random_cl.*/
void random_cl_seed(long long s)
{
	seed = s;
}

//------------------------------------------------------------------------------
/*Função que gera o valor maximo que pode ser gerado*/
long long random_cl_max()
{
	return(m-1);
}
