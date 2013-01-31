#include <stdio.h>

int main(){
	int i, j, *p_1, *p_2, **p_p_1, **p_p_2;
	i = 4;
	j = 5;
	printf("p_1: %p\n", p_1);
	printf("&i: %p\n", &i);
	p_1 = &i;
	p_2 = &j;
	p_p_1 = &p_2;
	p_p_2 = &p_1;

	printf("p_1 = &i: %p\n", p_1);

	return 0;
}

