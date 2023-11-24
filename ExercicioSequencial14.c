#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
		float n1,n2,elev;
		printf("Digite o primeiro numero:\n");
		scanf("%f", &n1);
		printf("Digite o segundo numero:\n");
		scanf("%f", &n2);
		
	    elev = pow(n1, n2);
		
		printf("Resultado: %.2f.\n", elev);
		}
