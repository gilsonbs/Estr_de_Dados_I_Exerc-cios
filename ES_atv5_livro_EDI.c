//Crie um programa que leia uma vari�vel e crie dois vetores din�micos, um com 
//o tamanho lido e outro com o dobro desse tamanho. Preencha esses vetores 
//respectivamente com pot�ncias de 2 e pot�ncias de 3.
//a) ok Crie uma vari�vel inteira e dois ponteiros do tipo inteiro.
//b) ok Pergunte ao usu�rio o tamanho do vetor din�mico e leia esse valor na vari�vel 
//inteira.
//c) ok Aloque dinamicamente os dois vetores usando a fun��o malloc.
//d) Fa�a um la�o de repeti��o para preencher o primeiro vetor com pot�ncias 
//de 2.
//e) Fa�a um segundo la�o de repeti��o para preencher o outro vetor com pot�ncias de 3.
// ok f) N�o se esque�a de usar a biblioteca math.h para poder usar o c�lculo de 
//pot�ncia (pow)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int tam;
int *vet1, *vet2;

int main(){
	
	int i;
	printf ("Escolha o tamanho do vetor: ");
	scanf ("%d", &tam);
	vet1 = (int *) malloc(sizeof (int)*tam);
	vet2 = (int *) malloc(sizeof (int)*tam*2);
	printf ("\nvet1: \n");
	for (i = 0; i < tam; i++) {
		vet1[i] = pow(2,i);
		printf ("Posicao %d: %d\n", i, vet1[i]);
	}
	printf("\nvet2: \n");
	for (i = 0; i < tam*2; i++) {
		vet2[i] = pow (3,i);
		printf ("Posicao %d: %d\n", i, vet2[i]);
	}
	system("Pause");
	return(0);

}
