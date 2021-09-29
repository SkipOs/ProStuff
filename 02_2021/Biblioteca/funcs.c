// Aqui ficam armazenadas as funções
#include <stdio.h>

//Troca de valores por referencia
void troca(int *a, int *b){
	int aux;
	aux=*a;
	*a=*b;
	*b=*a;
}

// operações básicas
int soma(int x, int y){ //soma x e y
	return x+y;
}

int mult(int x, int y){ // multiplica x e y
	return x*y;
}

int sub(int x, int y){ //subtrai y de x
	return x-y;
}

float divi(int x, int y){ // divide x e y
	float aux = ((float)x/y);
	return aux;
}

// operações complexas
int pot(int a, int b){ // faz a potencia de a em b
	if(b == 0)	// verifica se o expoente(b) é 0 (se a multiplicação será por 0)
		return 1;
	else
		return (a * pot(a, b-1)); // executa a base(a) vezes o expoente atual(b) menos 1
}

int mdc(int a, int b){ // calcula o MDC recursivamente
	int aux;
	if (b==0)
		return a;
	aux=a%b;
	return mdc(b,aux);
}

