//Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Farenheit. F = °C × 1,8 + 32
#define autor "Gabriel"
#include<stdio.h>
#include<stdlib.h>
int main()
{
float fare,cel;
	printf("Quantos graus em celsius ?\n");
	scanf("%f",& cel);

	fare = (cel * 1.8) + 32;

	printf("Em graus farenheit: %f", fare);
}
