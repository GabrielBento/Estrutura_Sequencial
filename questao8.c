//Fa�a um Programa que pergunte quanto voc� ganha por hora e o n�mero de horas trabalhadas no m�s. Calcule e mostre o total do seu sal�rio no referido m�s.
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
