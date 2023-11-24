#include <stdio.h>
#include <stdlib.h>

int main(){
	float sal;
	float perc;
	printf("Digite seu salario:\n");
	scanf("%f", &sal);
	printf("Digite o percentual de aumento:\n");
	scanf("%f", &perc);
	
	float aumt = sal*(perc/100);
	float novo_sal = sal+sal*(perc/100.0);
	
	printf("Percentual de aumento: %.2f.\n", aumt);
	printf("Novo salario: %.2f.\n", novo_sal);
}
