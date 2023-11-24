#include <stdio.h>
#include <stdlib.h>

int main(){
	float n1, n2, n3;
	printf("Informe as tres notas:\n");
	scanf("%f", &n1);
	scanf("%f", &n2);
	scanf("%f", &n3);
	
	int media = (n1+n2+n3)/3;
	
	printf("A media de suas notas: %d.\n", media);
}
