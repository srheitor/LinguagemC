#include <stdio.h>
#include <stdlib.h>

int main(){
	float sal;
	printf("Digite seu salario:\n");
	scanf("%f", &sal);
	
	float Gratif = sal*(5.0/100.0);
	float Imposto = sal*(7.0/100.0);
	
	float novo_sal = (sal+Gratif)-Imposto;
	
	printf("Gratificacao: %.2f.\n", Gratif);
	printf("Imposto: %.2f.\n", Imposto);
	printf("Novo salario: %.2f.\n", novo_sal);
}
