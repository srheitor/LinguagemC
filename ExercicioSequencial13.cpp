#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
		float num,quad,cubo,raizQ,raizC;
		printf("Digite o numero desejado:\n");
		scanf("%f", &num);
		
	    quad = pow(num, 2);
	    cubo = pow(num, 3);
	    raizQ = pow(num, 1.0/2.0);
	    raizC = pow(num, 1.0/3.0);
		
		printf("Quadrado: %f.\n", quad);
		printf("Cubo: %f.\n", cubo);
		printf("Raiz Quadrada: %f.\n", raizQ);
		printf("Raiz Cubica: %f.\n", raizC);
		}
