#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void validarmeta (int dia1 [3][3], int dia2 [3][3]){
		int matriztotal [3][3];
		int meta = 0;
		int i;
		int j;
		//passo 1
		printf("Digite a meta por setor:\n")/
		scanf("%d", &meta);
		//passo 2
		for(i = 0; i < 3; i++){
			for(j = 0; i < 3; j++){
				matriztotal[i][j] = dia1[i][j] + dia2[i][j];
			}
		}
		//passo 3
		printf("Matriz total:\n");
		for(i = 0; i < 3; i++){
			for(j = 0; i < 3; j++){
				printf("%d", matriztotal[i][j]);
			}
			printf("\n");
		}
		//passo 4
		for(i = 0; i < 3; i++){
			for(j = 0; j<3; j++){
				if (matriztotal[i][j] >= meta){
					printf("Setor %d de %d alcançou a meta\n", (i + 1), (j + 1));
				}
			}
		}
int main (){
		for(i = 0; i < 3; i++){
			for(j = 0; i < 3; j++){
				printf("Digite o total de pessoas do setor %d de %d\n", (i + 1), (j + 1));
				scanf("%d", &dia1 [i][j]);
			}
		}
		
		for(i = 0; i < 3; i++){
			for(j = 0; i < 3; j++){
				printf("Digite o total de pessoas do setor %d de %d\n", (i + 1), (j + 1));
				scanf("%d", &dia2 [i][j]);
			}
		}
	}
}