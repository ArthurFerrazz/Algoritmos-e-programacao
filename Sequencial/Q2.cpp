/*Fa�a um algoritmo que imprima o poema abaixo, com a mesma formata��o:
Caderno de poesias � um belo lugar.
Tantas coisas lindas que eu gostaria de falar.
Eu falo em forma de versos para todos poderem escutar.
Agora voc� j� sabe por que os poetas passam os dias escrevendo em seus
cadernos de poesias.*/

#include <stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "Portuguese_Brazil");
	printf("Caderno de poesias � um belo lugar.\n");
	printf("Tantas coisas lindas que eu gostaria de falar.\n");
	printf("Eu falo em forma de versos para todos poderem escutar.\n");
	printf("Agora voc� j� sabe por que os poetas passam os dias escrevendo em seus\n");
	printf("cadernos de poesias.");
}
