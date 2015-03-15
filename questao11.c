/*Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre:
o produto do dobro do primeiro com metade do segundo .
a soma do triplo do primeiro com o terceiro.
o terceiro elevado ao cubo*/
#define autor "Gabriel"
#include<stdio.h>
#include<stdlib.h>
int main()
{
int num1,num2;
float num3,produto,soma,cubo;

printf("Digite o prmeiro numero inteiro \n");
scanf("%d",& num1);	

printf("Digite o segundo numero inteiro \n");
scanf("%d",& num2);	

printf("Digite o numero real \n");
scanf("%f",& num3);

produto = (num1*2) * num2/2;
soma = (num1*3) + num3;
cubo  = num3*num3*num3;

printf("O produto do dobro do primeiro com metade do segundo: %f\n", produto);
printf("a soma do triplo do primeiro com o terceiro: %f\n", soma);
printf("o terceiro elevado ao cubo: %f\n", cubo);
}
