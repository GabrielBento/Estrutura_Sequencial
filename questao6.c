//Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.
#define autor "Gabriel"
#include<stdio.h>
#include<stdlib.h>

int main()
{
	float raio,area;
	
	printf("Digite o raio de um circulo");
	scanf("%f",& raio);
	
	area = (raio * raio) * 3.14;
	
	printf("Area é igua a: %f", area);
}
