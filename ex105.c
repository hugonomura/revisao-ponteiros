#include <stdio.h>

int main(){
	int i, j, *p_1, *p_2, **p_p_1, **p_p_2;
	i = 4;
	j = 5;
	printf("p_1: %p\n", p_1); // p_1 contém o valor de um endereço arbitrário de memória (lixo)
	printf("&p_1: %p\n", &p_1); // endereco inical de p_1
	printf("&i: %p\n", &i); // i tem um espaço de memória reservado para ela
	p_1 = &i; // p_1 agora contém o endereço de memória de i
	p_2 = &j; // p_2 agora contém o endereço de memória de j
	p_p_1 = &p_2; // p_p_1 contém o endereço de memória de p_2, que, por sua vez, contém o endereço de memória de j
	p_p_2 = &p_1; // p_p_2 contém o endereço de memória de p_1, que, por sua vez, contém o endereço de memória de i

	printf("p_1 = &i: %p\n", p_1); // apenas para mostrar que deu certo
	printf("&p_1: %p\n", &p_1); // mostrando que o endereço de p_1 não muda
	return 0;
}

