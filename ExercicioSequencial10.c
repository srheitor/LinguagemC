#include <stdio.h>
#include <stdlib.h>

int main(){
		float pi = 3.14;
		float raio;
		printf("Digite o raio do circulo:\n");
		scanf("%f", &raio);
		
		float area = pi*(raio*raio);
		
		printf("A area do circulo e de: %.2f.\n", area);
		}
