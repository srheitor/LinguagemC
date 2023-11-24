#include <stdio.h>
#include <stdlib.h>

int main(){
		int seg,min,hr;
		printf("Digite o tempo em segundos:\n");
		scanf("%d", &seg);
		
	    hr = seg/3600;
		seg = seg%3600;
		min = seg/60;
		seg = seg%60;
		
		printf("O valor passado resulta em %d hora(s), %d minuto(s) e %d segundo(s).\n", hr,min,seg);
		}
