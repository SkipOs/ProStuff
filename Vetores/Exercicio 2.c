#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*2. Faça um programa em C para ler 10
valores, calcular a média aritmética,
imprimir a média e os valores iguais ou
superiores a média.*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    //vetores
    float v[10];
    //variaveis
    float maior, media;
    int i;
    
	for (i=0;i<10;i++){
		printf("Informe o %dº numero: ",i+1);
		scanf("%f", &v[i]);
		media=v[i]+media;
	}
	
	i=0;
	media=media/10;
	printf("\nA média aritimética dos números inseridos é de %.2f \n", media);
	
	for (i=0;i<10;i++){
		if(v[i]>media)
			printf("\n%.2f é maior que a média", v[i]);
		
		if(v[i]==media)
			printf("\n%.2f é igual a média", v[i]);
		
		if(v[i]<media)
			printf("\n%.2f é menor que a média", v[i]);
	}
	
	printf("\n");
	
	system("pause");
    return 0;
}
