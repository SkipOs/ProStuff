#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*2. Fa�a um programa em C para ler 10
valores, calcular a m�dia aritm�tica,
imprimir a m�dia e os valores iguais ou
superiores a m�dia.*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    //vetores
    float v[10];
    //variaveis
    float maior, media;
    int i;
    
	for (i=0;i<10;i++){
		printf("Informe o %d� numero: ",i+1);
		scanf("%f", &v[i]);
		media=v[i]+media;
	}
	
	i=0;
	media=media/10;
	printf("\nA m�dia aritim�tica dos n�meros inseridos � de %.2f \n", media);
	
	for (i=0;i<10;i++){
		if(v[i]>media)
			printf("\n%.2f � maior que a m�dia", v[i]);
		
		if(v[i]==media)
			printf("\n%.2f � igual a m�dia", v[i]);
		
		if(v[i]<media)
			printf("\n%.2f � menor que a m�dia", v[i]);
	}
	
	printf("\n");
	
	system("pause");
    return 0;
}
