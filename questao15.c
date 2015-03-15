/*Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês.
 Calcule e mostre o total do seu salário no referido mês, 
 sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato, 
 faça um programa que nos dê:
salário bruto.
quanto pagou ao INSS.
quanto pagou ao sindicato.
o salário líquido.
calcule os descontos e o salário líquido, conforme a tabela abaixo:
+ Salário Bruto : R$
- IR (11%) : R$
- INSS (8%) : R$
- Sindicato ( 5%) : R$
= Salário Liquido : R$ */
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
	printf("seu salario é: %f\n", totall);
}
