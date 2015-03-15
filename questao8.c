//Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.
#define autor "Gabriel"
#include<stdio.h>
#include<stdlib.h>
int main()
{
float mon,salario;
int hor;

printf("Quanto voce ganha por hora\n");	
scanf("%f",& mon);

printf("Quantas horas voce trabalha\n");
scanf("%d",& hor);

salario = (hor*30)*mon;

printf("Voce ganha: %f", salario);
}
