#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct _complex {
	
	double re;
	double im;
	
} complex;

void complexprint(complex w);
complex complexAdd(complex a, complex b);
complex complexSub(complex a, complex b);
int complexEqual(complex a, complex b);

int main(int argc, char *argv[]) {
	
	complex w = {
	
		.re = 0,
		.im = 0
	};
	
	printf("The zero complex number is :\n");
	complexprint(w);
	printf("\n");
	
	complex x = {
		
		.re = 42,
		.im = 17
	};
	
	printf("The other complex number is :\n");
	complexprint(x);
	printf("\n");
	
	complex sum = complexAdd(w,x);
	
	printf("The sum is:\n");
	complexprint(sum);
	printf("\n");
	
	complex difference = complexSub(sum,x);
	printf("Add the zero again is:\n");
	complexprint(difference);
	printf("\n");
	
	printf("The values ");
	if(complexEqual(difference,w)) {
		
		printf("are");
	} else {
		
		printf("are not");
	}
	
	printf(" equal.\n");
	
	return EXIT_SUCCESS;
}

void complexprint(complex w) {

	printf("%lf + %lf i",w.re,w.im);
}

complex complexAdd(complex a, complex b) {
	
	complex value = {
		.re = a.re + b.re,
		.im = a.im + b.im
	};
	
	return value;
}

complex complexSub(complex a, complex b) {
	
	complex value = {
		.re = a.re - b.re,
		.im = a.im - b.im
	};
	
	return value;
}

int complexEqual(complex a, complex b) {
	
	return (a.re == b.re) && (a.im == b.im);
}






