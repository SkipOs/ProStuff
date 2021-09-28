/*2) Fa�a um programa que implemente uma
fun��o iterativa que calcule o m�ximo divisor
comum (MDC) de dois n�meros e depois fa�a
tamb�m outra fun��o recursiva para o mesmo
caso.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int mdc(int a, int b);
void troca(int *a, int *b);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, aux;//declara��o de vari�veis
	
	printf("Insira o primeiro valor: ");
	scanf("%d", &n1);
	printf("Insira o segundo valor: ");
	scanf("%d", &n2);
	if (n1<n2)
		troca(&n1, &n2); //n1= maior, n2= menor
			 
	while (n2!=0){
		aux=n1%n2;		//acha o resto entre n1 e n2 at� que n2=0, assim n1 = MDC
		troca(&n1, &n2); 
		troca(&n2, &aux);
	}
	printf("\nMDC = %d\n", n1);
	
	printf("\nMDC recursivo = %d\n", mdc(n1,n2));
	system("pause");
	return 0;
}

int mdc(int a, int b){ // calcula o MDC recursivamente
	int aux;
	if (b==0)
		return a;
	aux=a%b;
	return mdc(b,aux);
}

//Troca de valores por referencia
void troca(int *a, int *b){
	int aux;
	aux=*a;
	*a=*b;
	*b=aux;
}
