#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Fa�a um programa em C que leia uma data no
formato DD/MM/AAAA (ex: 01/06/2021) e
exiba a data lida no formato: dia DD de <nome
do m�s> de AAAA.
? Ex: Entra 01/06/2021 e sai �01 de Junho de 2021�.
? Exibir a sa�da apenas se a data for v�lida:
? Validar o dia do m�s (30 dias).
? Validar o m�s.
? Validar o ano a partir de 1900.
? Dica: a fun��o atoi(str) converte string para int.*/

int main (int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	
	char s;
					
	//entrada do usu�rio				
    printf ("Insira os 20 n�meros (Ex: |0 1 2 ... 18 19 20|): ");
    scanf("|%s|",&s);
    
    /*for (i = 0; i < 10; i++)
	{
		printf("Digite o valor da posicao %d do vetor: ", i+1);
		scanf("%d", &vetor[i]);
		soma = soma + vetor[i];
		vetor[i] = vetor[i] * 2;
	}*/
	
	system("pause");
	return (0);
}
