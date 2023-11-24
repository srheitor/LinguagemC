#include <stdio.h>
#include <stdlib.h>

int main(){
	float base;
	float altura;
	printf("Digite o valor da base:\n");
	scanf("%f", &base);
	printf("Digite o valor da altura:\n");
	scanf("%f", &altura);
	
	float area = (base*altura)/2;
	
	printf("Area total do triangulo: %.2f.\n", area);

}
