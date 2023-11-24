#include <stdio.h>
#include <stdlib.h>

int main(){
		int saque,cem,cinq,vint,dez,cinc,dois;
		printf("Digite o valor a ser sacado:\n");
		scanf("%d", &saque);
		
	    cem = saque/100;
	    saque = saque%100;
	    cinq = saque/50;
	    saque = saque%50;
	    vint = saque/20;
	    saque = saque%20;
	    dez = saque/10;
	    saque = saque%10;
	    cinc = saque/5;
	    saque = saque%5;
	    dois = saque/2;
	    saque = saque%2;
		
		printf("Notas de R$100,00: %d.\n", cem);
		printf("Notas de R$50,00: %d.\n", cinq);
		printf("Notas de R$20,00: %d.\n", vint);
		printf("Notas de R$10,00: %d.\n", dez);
		printf("Notas de R$5,00: %d.\n", cinc);
		printf("Notas de R$2,00: %d.\n", dois);
		}
