#include <stdio.h>
#include <stdlib.h>

int main(){
	float sal;
	printf("Digite seu salario:\n");
	scanf("%f", &sal);
	
	float aumt = sal+sal*(25.0/100.0);
	
	printf("Seu novo salario: %.2f.\n", aumt);
}
