#include <stdio.h>

int main(){
	char str[100];
	int i;

	printf("Enter a value: \n");
	scanf("%s %d",str,&i);   /* %s or %d bta ra h ki string or int lene waale h, string
							    k alawa baaki sab k aage & lgana pdta h scanf m */

	printf("You entered: %s :::: %d", str, i);  // double k liye %lf use hoga

	return 0;
}