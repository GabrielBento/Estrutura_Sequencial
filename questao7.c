//Fa�a um Programa que calcule a �rea de um quadrado, em seguida mostre o dobro desta �rea para o usu�rio
#define autor "Gabriel"
#include<stdio.h>
#include<stdlib.h>
int main()
{
float lado,area;

printf("Digite o valor de um dos lados");
scanf("%f",& lado);

area = lado*lado;
area = area*2;

printf("O dobro da area �: %f", area);	
}
