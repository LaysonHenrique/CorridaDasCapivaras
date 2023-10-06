/*********************Cabeçalho*************************************

* Nome: Layson Henrique da Silva
* RGA: 202219070457
* Trabalho 1 
* Professor: Diego Padilha Rupert

*/


//**************************Inicio do programa************************
#include <stdlib.h>
#include <stdio.h>

// Inicio da main, onde declaro a variável nCapivas e aux, nCapivas vai guardar o numero
//de capivaras, e a variavél aux que armazena o valor -1 do vetor para realizar a troca.
int main() {
   int nCapivas, aux;

//Entrada do numero de participantes, esse valor define o tamanho do nosso vetor de capivaras.
   printf("Informe o numero de Capivaras participantes!\n");
   scanf("%d", &nCapivas);
  
// Struct para representar uma capivara como foi pedido na descrição do trabalho
    typedef struct {
        int numero;
        int ultrapass;
    } Capivara;

//Aloca memória para as capivaras com  vetor capivaras de tamanho nCapivas
//Poderia usar malloc ou calloc, mas não vi necessidade
    Capivara capivaras[nCapivas];

//Inicia capivara e ultrapassagens com 0
    for (int i = 0; i < nCapivas; i++) {
        capivaras[i].numero = i + 1;
        capivaras[i].ultrapass = 0;
    }
  
//Pede a aultrapassagem e altera no vetor
    int ultrapassagem;
/*Verifica se o valor da ultrapassagem esta no vetor e altera de posição, de começar com j == 0,
começamos com 1, pois o valor da posição 0 do vetor trocará de posição se o valor da posição 1
o ultrapassar
*/
    while (scanf("%d", &ultrapassagem) != EOF) {
        for (int j = 1; j < nCapivas; j++) {
          if (ultrapassagem == capivaras[j].numero) {
              aux = capivaras[j-1].numero;
              capivaras[j-1].numero = capivaras[j].numero;
              capivaras[j].numero = aux;
            }
        }
    }

// *********************** Imprime a ordem de chegada **********************************
    for (int i = 0; i < nCapivas; i++) {
        printf("%d ", capivaras[i].numero);
    }
    printf("\n");

    return 0;
}

