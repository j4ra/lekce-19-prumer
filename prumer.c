#include <stdio.h>
#include <stdlib.h>

#define EPSILON 0.0001

int je_nula(double x) {
	return (x < EPSILON) && (x > -EPSILON);
}

int main() {
	double suma = 0.;
	int pocet = 0;
	
	double *cisla = malloc(sizeof(double));
	if(cisla == NULL){
		printf("Nedostatek pmaeti");
		return 0;
	}
	
	printf("Zadavejte cisla, ukoncete nulou:\n");
	
	int ok = scanf("%lf", &cisla[pocet]);
	if(ok != 1){
		printf("Nezadal jsi cisla!");
		return 0;
	}
	
	while (!je_nula(cisla[pocet])) {
		suma = suma + cisla[pocet];
		pocet++;
		
		cisla = realloc(cisla, sizeof(double) * 2 * pocet);
		if(cisla == NULL){
			printf("Nedostatek pmaeti");
			return 0;
		}
		
		ok = scanf("%lf", &cisla[pocet]);
		if(ok != 1){
			break;
		}
	}
	
	printf("Prumer je %lf\n", suma / pocet);
	
	return 0;
}
