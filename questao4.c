//Fa�a um Programa que pe�a as 4 notas bimestrais e mostre a m�dia.
#define autor "Gabriel"
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
 main()
{
float num1,num2,num3,num4,media;

printf("Digite a primeira nota\n");	
scanf("%f",& num1);
printf("Digite a segunda nota\n");
scanf("%f",& num2);
printf("Digite a terceira nota\n");
scanf("%f",& num3);
printf("Digite a quarta nota\n");	
scanf("%f",& num4);
media =(num1+num2+num3+num4)/4;
printf("A sua media �: %f", media);  
 
}
 

