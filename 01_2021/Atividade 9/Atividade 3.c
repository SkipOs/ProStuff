#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float sup=1, baixo=1, total;
	
	while(baixo<51){
		if((int)sup%2 != 0){
			total=total+sup/baixo;
			//printf("%.f / %.f \n", sup, baixo); //desative esse coment�rio para ver quais s�o as divis�es sendo realizadas
			baixo++;
			}
		sup++;
	}
	
	printf("O valor de S � de : %.2f \n", total);
	return 0;
}
