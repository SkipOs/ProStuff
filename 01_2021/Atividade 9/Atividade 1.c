#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    //vari�veis
    int nat, nant, nprox, i;
	
	i = (0); // contagem
	nat = (0); //n�mero atual
	nprox = (1); //pr�ximo da lista
	
	//C�lculo da Sequ�ncia de Fibonacci    
    while (i <20){ //enquanto contagem menor que 20
    	printf("%d", nat); //imprime n atual
    	printf(" "); // da um esp�o entre os n�meros
    	nant = nat; // define o nant como nat
    	nat = nprox; // define o nat como nprox
    	nprox = nant + nat; // o pr�ximo n�mero � a soma dos dois anteriores
    	i = i + 1; // redefine a contagem
	}
	printf("\n");
	system("pause");
    return 0;
}
