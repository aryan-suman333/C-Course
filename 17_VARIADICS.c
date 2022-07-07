#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void printfloats(int n,...){
	int i;
	float val;

	va_list value;      // additional arguements ko store krte h is se
	va_start(value, n); // 1st arguement se start krta h ye(initialization basically)

	for (int i = 0; i < n; ++i)
	{
		val = va_arg(value, double); // return krega arguements ko
		printf("%.2f\n", val);
	}
	va_end(value); // ye krna jaruri h function k return hone se pehle
}

int main(){
	printfloats(3, 3.14, 2.71, 1.41);
	return 0;
}