#include <stdio.h>
#include <math.h>

int main() {
	printf("This programm calculates pi with input accuracy.\n");
	for (int cont = 1; cont;) {
		int NumOfSigns = 0;
		printf("Input the number of sings after point in pi:\n");
		scanf_s("%d", &NumOfSigns);
		if (NumOfSigns < 0) {
			printf("You input invalid number. It sould be more than 0. Try again...");
		}
		else {
			long double pi = 0;
			int i = 0;
			do {
				pi += (1 - 2 *(i % 2)) * (long double)4 / (long double)(2 * i + 1);
				i++;
			} while ((long double)4 / (long double)(2 * i + 1) > pow((double)10, (double)(-1 * NumOfSigns)));
			printf("pi = %.*Lf\n", NumOfSigns, pi);
			printf("If you want to input new number of signs input 1, else input 0\n");
			scanf_s("%d", &cont);
		}
	}
	return 0;
}