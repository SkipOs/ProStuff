#include <stdlib.h>
#include "funcs.h"

// Aqui � o aqruivo do programa em si

int main(int argc, char *argv[3]) {
	setlocale(LC_ALL, "Portuguese");
	
	int aux;
	switch(atoi(argv[1])){
		case 1: //soma
			aux=soma((atoi(argv[2])),(atoi(argv[3])));
		break;
		
		case 2://subtra��o
			aux=sub((atoi(argv[2])),(atoi(argv[3])));
		break;
		
		case 3://multiplica��o
			aux=mult((atoi(argv[2])),(atoi(argv[3])));
		break; 
		
		case 4://divis�o
			if ((atoi(argv[3]))==0){
				printf("Insira um valor v�lido para a divis�o\n");
				system("pause");
				return 0;
			}
			else{
				printf("O resultado da opera��o � %2.f\n",divi((atoi(argv[2])),(atoi(argv[3]))));
				system("pause");
				return 0;
			}
		break;
		
		default:
			printf("Insira um valor v�lido para a execu��o\n");
			system("pause");
			return 0;
		break;
	}
		
	printf("O resultado da opera��o � %d\n", aux);
	system("pause");
	return 0;
}
