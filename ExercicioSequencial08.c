#include <stdio.h>
#include <stdlib.h>

int main(){
	float dep;
	float taxa;
	printf("Valor do deposito:\n");
	scanf("%f", &dep);
	printf("Taxa de juros:\n");
	scanf("%f", &taxa);
	
	float rend = dep*(taxa/100.0);
	float total = dep+rend;
	
	printf("Rendimento: %.2f.\n", rend);
	printf("Valor total: %.2f.\n", total);
}
