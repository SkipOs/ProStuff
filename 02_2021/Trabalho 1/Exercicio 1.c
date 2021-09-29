/*1) Faça um programa em linguagem C que contenha
duas funções: a primeira para ler os valores de um
vetor e a segunda para exibir os valores de um
vetor. O vetor pode ter tamanho 10.*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

#define max 10

int RecebeVet(int *n, int pos);
int ImprimeVet(int *n, int pos);


int main(){
	setlocale(LC_ALL, "Portuguese");
    int vet[max];

   	RecebeVet(&vet, max); 
	ImprimeVet(&vet, max);

	system("pause");
    return 0; 
}
      
int RecebeVet(int *n, int pos){ 
	int aux, i, aux2=0;
	for (i=0; i<pos; i++){
		aux2++;
		printf("Insira o %d item do vetor: ", aux2);
		scanf("%d", &aux);
		n[i] = aux;	
	}
	return 0;
}
      
int ImprimeVet(int *n, int pos){
	int i, aux;
	for (i=0; i<pos; i++){
		aux = n[i];
    	printf("%d ", aux);
	}
	return 0;
}


