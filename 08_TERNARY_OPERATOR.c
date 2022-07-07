#include <stdlib.h>
#include <stdio.h>

int main(){
	// condition ? expression 1 : expression 2
	// if condition true then expression 1 else expression 2

	int y;
	scanf("%d", &y);
	int x = y > 7 ? 25 : 50; // if y > 7 then x = 25 else x = 50
	printf("%d\n", x);

	return 0;
}