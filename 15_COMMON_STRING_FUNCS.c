#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	char s[] = "The quick big fox";
	char c = 'q';
	char* p = NULL;   // pointer p ko null se initialize kiya
	p = strchr(s, c); /* strchr string s m char c ko dhundega or jaha vo milega us jagah
					     ka address p ko allocate kr dega, pointer return krega basicaly
					     , agar nhi milega to NULL return krega */

	char w[] = "fox";
	char* p2 = NULL;
	p2 = strstr(s, w); // ye s m w string ko dhundega baaki same strchr jesa h
	printf("%s\n", p2);

	char s1[80] = "Hello how - are you - aryan";
	const char s2[2] = "-";
	char*token;

	token = strtok(s1, s2); // s1 string ko alag alag part m divide kr dega jaha bhi ise
							//  s2 string(-) milegi, output se smj aaega

	while(token != NULL){
		printf("%s\n", token);

		token = strtok(NULL, s2);
	}
	return 0;
}