#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
	int prime[30] = {2,3};
	int c = 2;
	for (int i = 5; i < 100; i += 2){
		bool isprime = true;
		for (int j = 0; j < c; ++j){
			if(i % prime[j] == 0){
				isprime = false;
			}
		}
		if(isprime == true){
			prime[c] = i;
			c++;
		}
	}
	for (int i = 0; i < c; ++i)
		printf("%d ", prime[i]);
 	return 0;
}