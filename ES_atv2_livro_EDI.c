//Uma famosa f�brica de sem�foros est� testando um novo prot�tipo, menor, 
//mais barato e eficiente. Foi solicitado � equipe de TI um programa em linguagem C para fazer o teste do novo hardware. O sem�foro tem tr�s objetos, cada 
//um cont�m um atributo cor e outro id. Devido �s limita��es de mem�ria e processamento, � necess�ria a cria��o de um ponteiro que vai percorrendo a mem�ria e imprimindo o valor na tela.
//a) Crie uma estrutura que tenha dois atributos: cor (cadeia de caracteres) e id 
//(inteiro).
//b) Crie tr�s vari�veis com o tipo definido no item a.
//c) Crie um ponteiro do mesmo tipo.
//d) Inicialize as estruturas da seguinte forma: 
//� cor vermelha, id 1.
//� cor amarela, id 2.
//� cor verde, id 3.
//e) Inicialize o ponteiro apontando para a primeira vari�vel criada.
//f) Por meio de opera��es aritm�ticas com ponteiros, percorra a mem�ria e imprima o valor de cada uma das vari�veis criadas nesse programa

#include <stdio.h>
#include <stdlib.h>

struct semaforo {
	char cor[10];
	int id;
};
struct semaforo s1 = {"Vermelho", 1};
struct semaforo s2 = {"Amarelo", 2};
struct semaforo s3 = {"Verde", 3};
struct semaforo *ptr_s;

int main () {
	ptr_s = &s1;
	printf("%d - %s\n", (*ptr_s).id,(*ptr_s).cor);
	ptr_s = ptr_s + 1;
	printf("%d - %s\n", (*ptr_s).id,(*ptr_s).cor);
	ptr_s = ptr_s + 1;
	printf("%d - %s\n", (*ptr_s).id,(*ptr_s).cor);
	system("Pause");
	return(0);
}
