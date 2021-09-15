#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    //variáveis
    int nat, nant, nprox, i;
	
	i = (0); // contagem
	nat = (0); //número atual
	nprox = (1); //próximo da lista
	
	//Cálculo da Sequência de Fibonacci    
    while (i <20){ //enquanto contagem menor que 20
    	printf("%d", nat); //imprime n atual
    	printf(" "); // da um espço entre os números
    	nant = nat; // define o nant como nat
    	nat = nprox; // define o nat como nprox
    	nprox = nant + nat; // o próximo número é a soma dos dois anteriores
    	i = i + 1; // redefine a contagem
	}
	printf("\n");
	system("pause");
    return 0;
}
