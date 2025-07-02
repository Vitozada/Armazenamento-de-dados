#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#define _CRT_SECURE_NO_WARNINGS
#define textinho "entrada e saida de dados!"

int main()
{
	printf("%s\n", textinho);

	int idade = 0;
	float altura = 0.0;
	char nome[50]= "";

	printf("me diga a sua idade!\n");
	scanf_s("%d", &idade);

	printf("me diga sua altura!\n");
	scanf_s("%f", &altura);

	printf("por fim, me diga seu nome!\n");
	scanf_s("%s", &nome , 50);

	system("cls");

	printf("Os dados informados sao:\n");
	printf("Idade: %d\n" , idade);
	printf("Altura: %.2f\n", altura);
	printf("Nome: %s\n", nome );
	
	printf("teste de commit");
}

