#include <stdio.h>
#include <stdlib.h>
#include "funElogicas.c"


int main(){

  typedef struct {
  int numeros; // numero de capivaras participantes
  int ultrapass; // numero de ultrapassagens
  }capivara;
  //término da struct

  capivara nCapivaras;
  int vetor[nCapivaras.numeros];
  
  scanf("%d", &nCapivaras.numeros);

  criarVetor(nCapivaras.numeros, vetor);
  printf("%d", vetor[0]);

  return 0;
}