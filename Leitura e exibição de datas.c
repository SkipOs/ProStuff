#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa em C que leia uma data no
formato DD/MM/AAAA (ex: 01/06/2021) e
exiba a data lida no formato: dia DD de <nome
do mês> de AAAA.
? Ex: Entra 01/06/2021 e sai “01 de Junho de 2021”.
? Exibir a saída apenas se a data for válida:
? Validar o dia do mês (30 dias).
? Validar o mês.
? Validar o ano a partir de 1900.
? Dica: a função atoi(str) converte string para int.*/

int main (int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	
	int erro=0; //variável de controle
	int dia,mes,vali,ano,dialim;
	
	//vetor dos meses
	char meses[12][12]={"Janeiro","Fevereiro","Março",
				"Abril","Maio","Junho","Julho",
				"Agosto","Setembro","Outubro",
				"Novembro","Dezembro"};
					
	//entrada do usuário				
    printf ("Insira a data (Ex: 13/07/2021 = dd/mm/aaaa): ");
    scanf("%d/%d/%d",&dia,&mes,&ano);
    
    
    //confere ano
    if (ano<1900){			
    	printf("%d não é um ano válido.\n", ano);
    	erro++; 	//incrementa variável de controle
	}
	else{			//define ano bissexto
            if (ano%4==0)	//ano bissexto
                vali=1;
            else 
                vali=0;		//ano não bissexto
    }
    
    
    //confere o mês
    if (mes==1 || mes==3 || mes==5 || mes==7 || mes== 8 || mes==10 || mes==11 ){
    	dialim=31;
    }
    else if (mes==2){	//define dia caso mês = fevereiro
        if (vali==0)		//caso ano não bissexto
            dialim=28;

        else			//caso ano bissexto
            dialim=29;
    }
    else if (mes==4 || mes==6 || mes==9 || mes==7 || mes==12){
        dialim=30;
    }
    else {
    	printf("%d não é um mês válido.\n", mes);
    	erro++; 	//incrementa variável de controle
	}
    
    
    //confere o dia
    if (dia<=dialim && dia!=0)
    	dia=dia;
    else {
    	printf("%d não é um dia válido.\n", dia);
    	erro++; 	//incrementa variável de controle
    }
    
    
    //verifica a variável e exibe a data caso tudo esteja ok
    if (erro==0)
    	printf("\nDia %d de %s de %d.\n",dia,meses[mes-1],ano);
    system("pause");
    return (0);
}
