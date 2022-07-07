#include <stdio.h>
#include <stdlib.h>

enum Company { GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT };

int main(){
	enum Company a = XEROX, b = GOOGLE, c = EBAY; //c++ m Company k aage enum nhi likhte

	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	return 0;
}