#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define max 5

void veriM(int n[max][max]);

int main() {
	setlocale(LC_ALL, "Portuguese");
	int num,c,l;

	int matriz[max][max];
	
	for (l=0;l<max;l++){
		for (c=0;c<max;c++){
			printf("Digite o numero que se encontra na coluna %d da linha %d na matriz: \n", c+1, l+1);
			scanf("%d", &num);
			matriz[l][c]=num;
		}
	}
	
	for (l=0;l<max;l++){
		for (c=0;c<max;c++){
			printf("%d \t", matriz[l][c]);
		}
		printf("\n");
	}
	
	veriM(matriz);
	return 0;
}

void veriM(int n[max][max]){
	int l, c, aux=0;
	
	for (l=0;l<max;l++){
		for (c=0;c<max;c++){
			if (c == l && n[l][c] != 1)	
				aux++;
			if (c != l && n[l][c] != 0)
				aux++;
		}
	}
	if (aux>0)
		return printf("A matriz inserida não é uma matriz indentidade.\n");
	else
		return printf("A matriz inserida é uma matriz indentidade.\n");
}	
