//Fa�a um Programa que converta metros para cent�metros.
#define autor "Gabriel"
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float metro,centimetro;
	
	printf("Este progrma tranforma metros em centimetros\n");
	printf("Digite a quantidade em metros");
	scanf("%f",& metro);
	centimetro = metro * 100;
	printf("0 valor em centimetros � : %f",centimetro);
	
	return 0;
}
