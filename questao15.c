/*Fa�a um Programa que pergunte quanto voc� ganha por hora e o n�mero de horas trabalhadas no m�s.
 Calcule e mostre o total do seu sal�rio no referido m�s, 
 sabendo-se que s�o descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato, 
 fa�a um programa que nos d�:
sal�rio bruto.
quanto pagou ao INSS.
quanto pagou ao sindicato.
o sal�rio l�quido.
calcule os descontos e o sal�rio l�quido, conforme a tabela abaixo:
+ Sal�rio Bruto : R$
- IR (11%) : R$
- INSS (8%) : R$
- Sindicato ( 5%) : R$
= Sal�rio Liquido : R$ */
#define autor "Gabriel"
#include<stdio.h>
#include<stdlib.h>

int main()
{
    float hora,mes,totalb,totall;
	
	printf("Quanto voce ganha por hora ? \n");
	scanf("%f",& hora);
	
	printf("Quantas horas voce trabalha por mes ? \n");
	scanf("%f",& mes);
	
	totalb = hora * mes ;
	totall = totalb-((totalb*24)/100);
	printf("seu salario �: %f\n", totall);
}
