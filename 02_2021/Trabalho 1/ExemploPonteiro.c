#include <stdio.h>
#include <string.h>
#include <locale.h>

// Essa fun��o nomeia (por refer�ncia) as posi��es de um vetor, de 0 a 4 e emprime logo em seguida a posi��o inserida

void ImprimeVet(int n);
void RecebeVet(int *n, int i);

int main(){
	setlocale(LC_ALL, "Portuguese");
    int i;
    int vet[5];

    for (i=0; i<5; i++){
        RecebeVet(&vet[i], i); // Usa se o caractere '&' na passagem do Vet[i] pois a fun��o espera um
                               // par�metro por REFER�NCIA, ou seja, um endere�o de mem�ria!

        ImprimeVet(vet[i]); // N�O se deve colocar nada antes de Vet[i] pois a fun��o 'ImprimeVet' 
							// espera um VALOR, e n�o um endere�o de mem�ria!!!
       }
    return 0; 
}
      
void ImprimeVet(int n){ // fun��o com um par�metro por valor
    printf("%d", n);//Imprime o valor de n
}

void RecebeVet(int *n, int i){ // fun��o EXIGINDO um par�metro por refer�ncia (int *n)
    *n = i; 	//Uso do par�metro por refer�ncia (*n)
}
