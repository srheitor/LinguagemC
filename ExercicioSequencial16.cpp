#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
		int nasc, ano, idade, idade2030;
		printf("Insira o ano em que nasceu:\n");
		scanf("%d", &nasc);
		printf("Insira o ano atual:\n");
		scanf("%d", &ano);
		
		idade = ano-nasc;
		idade2030 = 2030-nasc;

		
		printf("Idade atual: %d.\n", idade);
		printf("Idade em 2030: %d.\n", idade2030);
		}
