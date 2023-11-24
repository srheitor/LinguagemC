#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float n1, n2, n3, p1, p2, p3;
	
	printf("Digite a primeira nota:\n");
	scanf("%f", &n1);
	printf("Digite o peso da primeira nota:\n");
	scanf("%f", &p1);
	
	printf("Digite a segunda nota:\n");
	scanf("%f", &n2);
	printf("Digite o peso da segunda nota:\n");
	scanf("%f", &p2);
	
	printf("Digite a terceira nota:\n");
	scanf("%f", &n3);
	printf("Digite o peso da terceira nota:\n");
	scanf("%f", &p3);
	
	float m=(n1*p1 + n2*p2 + n3*p3)/(p1+p2+p3);
	
	printf("A media ponderada e de: %.2f.\n", m);
}
