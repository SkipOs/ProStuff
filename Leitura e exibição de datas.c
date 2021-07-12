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
	
	int erro=0; //vari�vel de controle
	int dia,mes,vali,ano,dialim;
	
	//vetor dos meses
	char meses[12][12]={"Janeiro","Fevereiro","Mar�o",
						"Abril","Maio","Junho","Julho",
						"Agosto","Setembro","Outubro",
						"Novembro","Dezembro"};
					
	//entrada do usu�rio				
    printf ("Insira a data (Ex: 13/07/2021 = dd/mm/aaaa): ");
    scanf("%d/%d/%d",&dia,&mes,&ano);
    
    
    //confere ano
    if (ano<1900){			
    	printf("%d n�o � um ano v�lido.\n", ano);
    	erro++; 	//incrementa vari�vel de controle
	}
	else{			//define ano bissexto
            if (ano%4==0)	//ano bissexto
                vali=1;
            else 
                vali=0;		//ano n�o bissexto
    }
    
    
    //confere o m�s
    if (mes==1 || mes==3 || mes==5 || mes==7 || mes== 8 || mes==10 || mes==11 ){
    	dialim=31;
    }
    else if (mes==2){	//define dia caso m�s = fevereiro
        if (vali==0)		//caso ano n�o bissexto
            dialim=28;

        else			//caso ano bissexto
            dialim=29;
    }
    else if (mes==4 || mes==6 || mes==9 || mes==7 || mes==12){
        dialim=30;
    }
    else {
    	printf("%d n�o � um m�s v�lido.\n", mes);
    	erro++; 	//incrementa vari�vel de controle
	}
    
    
    //confere o dia
    if (dia<=dialim && dia!=0)
    	dia=dia;
    else {
    	printf("%d n�o � um dia v�lido.\n", dia);
    	erro++; 	//incrementa vari�vel de controle
    }
    
    
    //verifica a vari�vel e exibe a data caso tudo esteja ok
	if (erro==0)
    	printf("\nDia %d de %s de %d.\n",dia,meses[mes-1],ano);
	system("pause");
	return (0);
}
