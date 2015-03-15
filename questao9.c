//Faça um Programa que peça a temperatura em graus Farenheit, transforme e mostre a temperatura em graus Celsius. C = (5 * (F-32) / 9).
#define autor "Gabriel"
#include<stdio.h>
#include<stdlib.h>
int main()
{
float fare,cel;
	printf("Quantos graus em farenheit ?\n");
	scanf("%f",& fare);

	cel =(5*(fare-32)/9);

	printf("Em graus celsius: %f", cel);
}
