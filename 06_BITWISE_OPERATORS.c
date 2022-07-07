#include <stdlib.h>
#include <stdio.h>

int main(){

	unsigned int a = 60;  // 0000 0000 0000 0000 0000 0000 0011 1100
	unsigned int b = 13;  // 0000 0000 0000 0000 0000 0000 0000 1101

	// unsigned mtlb -ve nhi ho skta
	int c = a & b; // 0000 1100 = 12 (and)
	int d = a | b; // 0011 1101 = 61 (or)
	int e = a ^ b; // 0011 0001 = 49 (xor)
	int f = a <<2; // 1111 0000 = 240 (shift left by 2 bit)
	int g = a >>4; // 0000 0011 = 3  (shift right by 4 bit)
	int h = ~a; // 1111 1111 1111 1111 1111 1111 1100 0011 (negation)
	return 0;
}