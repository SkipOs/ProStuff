#include <stdio.h>
#include <string.h>
#include <locale.h>

// Essa função nomeia (por referência) as posições de um vetor, de 0 a 4 e emprime logo em seguida a posição inserida

void ImprimeVet(int n);
void RecebeVet(int *n, int i);

int main(){
	setlocale(LC_ALL, "Portuguese");
    int i;
    int vet[5];

    for (i=0; i<5; i++){
        RecebeVet(&vet[i], i); // Usa se o caractere '&' na passagem do Vet[i] pois a função espera um
                               // parâmetro por REFERÊNCIA, ou seja, um endereço de memória!

        ImprimeVet(vet[i]); // NÃO se deve colocar nada antes de Vet[i] pois a função 'ImprimeVet' 
							// espera um VALOR, e não um endereço de memória!!!
       }
    return 0; 
}
      
void ImprimeVet(int n){ // função com um parâmetro por valor
    printf("%d", n);//Imprime o valor de n
}

void RecebeVet(int *n, int i){ // função EXIGINDO um parâmetro por referência (int *n)
    *n = i; 	//Uso do parêmetro por referência (*n)
}
