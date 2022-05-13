//Crie um programa que leia uma variável e crie dois vetores dinâmicos, um com 
//o tamanho lido e outro com o dobro desse tamanho. Preencha esses vetores 
//respectivamente com potências de 2 e potências de 3.
//a) ok Crie uma variável inteira e dois ponteiros do tipo inteiro.
//b) ok Pergunte ao usuário o tamanho do vetor dinâmico e leia esse valor na variável 
//inteira.
//c) ok Aloque dinamicamente os dois vetores usando a função malloc.
//d) Faça um laço de repetição para preencher o primeiro vetor com potências 
//de 2.
//e) Faça um segundo laço de repetição para preencher o outro vetor com potências de 3.
// ok f) Não se esqueça de usar a biblioteca math.h para poder usar o cálculo de 
//potência (pow)

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
