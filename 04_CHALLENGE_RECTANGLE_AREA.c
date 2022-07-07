#include <stdio.h>
#include <stdlib.h>

int main(){
	double l, b;
	scanf("%lf %lf", &l, &b);
	double p = 2*(l + b), a = l*b;

	printf("length = %lf, breadth = %lf and perimeter = %lf\n", l, b, p);
	printf("length = %lf, breadth = %lf and area = %lf\n", l, b, a);

	return 0;
}