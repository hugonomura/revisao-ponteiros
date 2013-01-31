#include <stdio.h>
#define PI 3.14


void esfera (float r, float *area, float *volume);

int main(){
	float a, v;
	float raio;

	scanf("%f", &raio);

	esfera(raio, &a, &v);

	printf("Area: %f\nVolune: %f\n", a, v);

	return 0;
}

void esfera (float r, float *area, float *volume){
	*area = 4 * PI * r * r;
	*volume = 4/(float)3 * PI * r * r * r; // forçando um cast para que 4/3 retorne um float e não um int
}

