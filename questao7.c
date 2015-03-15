//Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário
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

printf("O dobro da area é: %f", area);	
}
