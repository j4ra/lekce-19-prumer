#include <stdio.h>

#define EPSILON 0.0001

int je_nula(double x) {
	return (x < EPSILON) && (x > -EPSILON);
}

int main() {
	double suma = 0.;
	int pocet = 0;
	double cislo;
	
	printf("Zadavejte cisla, ukoncete nulou:\n");
	
	scanf("%lf", &cislo);
	
	while (!je_nula(cislo)) {
		suma = suma + cislo;
		pocet++;
		
		scanf("%lf", &cislo);
	}
	
	printf("Prumer je %lf\n", suma / pocet);
	
	return 0;
}
