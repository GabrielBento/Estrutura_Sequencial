//Fa�a um Programa que pe�a o raio de um c�rculo, calcule e mostre sua �rea.
#define autor "Gabriel"
#include<stdio.h>
#include<stdlib.h>

int main()
{
	float raio,area;
	
	printf("Digite o raio de um circulo");
	scanf("%f",& raio);
	
	area = (raio * raio) * 3.14;
	
	printf("Area � igua a: %f", area);
}
