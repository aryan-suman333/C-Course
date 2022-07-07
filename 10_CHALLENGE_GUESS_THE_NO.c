#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	time_t t;
	srand((unsigned)time(&t));
	int r = rand() % 21;

	printf("This is a guessing game.\n");
	printf("I have chosen a no. between 0 and 20 which you must guess.\n");

	int a = 5, x;
	while(a > 0){
		for (int i = 0; i < 1; ++i){
			printf("You have %d tr%s left.\nEnter a guess: \n", a, a == 1 ? "y" : "ies");
			scanf("%d", &x);
			if(x > 20 || x < 0){
				printf("Your no. must be between 0 and 20.\n");
				break;
			}
			else if(x > r){
				printf("Sorry, %d is wrong. My no. is less than that.\n", x);
				a--;
			}
			else if(x < r){
				printf("Sorry, %d is wrong. My no. is more than that.\n", x);
				a--;
			}
			else if(x = r){
				printf("Congratulations. You guessed it!\n");
				a = 0;
			}
		}
	}
	printf("Game over!\n");
	return 0;
}