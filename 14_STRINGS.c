#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char mystring[] = "Hi my name is aryan"; // c m string keyword nhi hota
	// agar m mystring[20] likhu to ye 19 character hi store krega as \0 k liye 
	// ek space chahiye hogi
	// %s for string 

	printf("The length of the string is: %d\n", (int)strlen(mystring));

	char src[50], des[50];

	strcpy(src, "This is source");
	strcpy(des, "This is destination"); // assigning or copying string

	char a[40], b[12];

	memset(b, '\0', sizeof(b)); // ye b k end m \0 ko add kr rha h
	strcpy(a, "Hello how are you doing");
	strncpy(b, a, 10); // ye better way h copy krne ka as isme hum decide kr skte h
					   //  kitne letters copy krne h, isme a k 10 char b m copy honge

	char c[] = "my string";
	char input[80];

	scanf("%s", input);

	printf("%s\n", strcat(input, c)); // string concatenate krne k liye
	printf("%s\n", strncat(input, c, 5)); // better way h as hum bta skte kitne char add
										  // krne h, isme c k 5 char input m add honge
	return 0;
}