#include <stdlib.h>
#include "funcs.h"

// Aqui é o aqruivo do programa em si

int main(int argc, char *argv[3]) {
	setlocale(LC_ALL, "Portuguese");
	
	int aux;
	switch(atoi(argv[1])){
		case 1: //soma
			aux=soma((atoi(argv[2])),(atoi(argv[3])));
		break;
		
		case 2://subtração
			aux=sub((atoi(argv[2])),(atoi(argv[3])));
		break;
		
		case 3://multiplicação
			aux=mult((atoi(argv[2])),(atoi(argv[3])));
		break; 
		
		case 4://divisão
			if ((atoi(argv[3]))==0){
				printf("Insira um valor válido para a divisão\n");
				system("pause");
				return 0;
			}
			else{
				printf("O resultado da operação é %2.f\n",divi((atoi(argv[2])),(atoi(argv[3]))));
				system("pause");
				return 0;
			}
		break;
		
		default:
			printf("Insira um valor válido para a execução\n");
			system("pause");
			return 0;
		break;
	}
		
	printf("O resultado da operação é %d\n", aux);
	system("pause");
	return 0;
}
