#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char nome[10];
	int ra, idade;
	float altura;
	
	printf("Digite o seu Nome:\n");
	scanf("%s",&nome);
	
	printf("Digite o seu RA:\n");
	scanf("%d",&ra);
	
	printf("Digite sua Idade:\n");
	scanf("%d",&idade);
	
	printf("Digite sua Altura:\n");
	scanf("%f",&altura);
	
	printf("Seja bem vindo %s", nome); 
	printf(" seu RA e %d",ra);
	printf(" na nossa faculdade, voce esta matriculado com sucesso.");
	
	return 0;
}
