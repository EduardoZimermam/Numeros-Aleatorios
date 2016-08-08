//Aluno: Eduardo Zimermam Pereira GRR20152952
#include <stdio.h>
#include <stdlib.h>
#include "random.h"

int main()
{
  long long tamanho, *vetor, i, num_gerado, per;
  tamanho = random_cl_max();
  vetor = malloc (sizeof(long long) * tamanho);

  for(i = 0; i < tamanho; i++)
    vetor[i] = 0;

  num_gerado = random_cl();
  per = 0;
  while (vetor[num_gerado] != 1)
  {
    vetor[num_gerado] = 1;
    per++;
    num_gerado = random_cl();
  }

  printf("Periodo do gerador: %lld\n", per);
  free(vetor);
  return(0);
}
