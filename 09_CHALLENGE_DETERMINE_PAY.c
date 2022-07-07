#include <stdio.h>
#include <stdlib.h>

int main(){
	int h, p = 0, taxes = 0;
	scanf("%d", &h);
	if(h <= 40) p = 12*h;
	else p = 12*40 + 18*(h - 40);
	printf("Gross pay: %d\n", p);

	if(p <= 300){
		taxes = ((p*15)/100);
		p = p - ((p*15)/100);
	}
	else if(p > 300 && p <= 450){
		taxes = 45 + (((p-300)*20)/100);
		p = p - 45 - (((p-300)*20)/100);
	}
	else if(p > 450){
		taxes = 75 + (((p-450)*25)/100);
		p = p - 75 - (((p-450)*25)/100);
	}

	printf("Net pay: %d\n", p);
	printf("Taxes: %d\n", taxes);
	return 0;
}