#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
		float pe, pol, jarda, milha;
		printf("Insira a medida em pes:\n");
		scanf("%f", &pe);
		
		pol = pe*12.0;
		jarda = pe/3.0;
		milha = jarda/1760;

		
		printf("Polegadas: %.2f.\n", pol);
		printf("Jardas: %.2f.\n", jarda);
		printf("Milha: %.2f.\n", milha);
		}
