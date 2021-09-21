// Aqui ficam armazenadas as funções
#include <stdio.h>

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
