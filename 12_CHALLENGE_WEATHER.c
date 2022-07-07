#include <stdlib.h>
#include <stdio.h>

int main(){

	double arr[5][12] =
	{
		{4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
		{8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
		{9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
		{7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
		{7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
	};
	double subtot = 0, tot = 0, a;

	for (int i = 0; i < 5; ++i){
		for (int j = 0; j < 12; ++j){
				subtot += arr[i][j];
			}
		printf("%d%d : %lf inches\n", 201, i, subtot);
		tot += subtot;
		subtot = 0.0;
	}
	printf("Yearly avg is %lf inches\n", tot/5);

	for (int i = 0; i < 12; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			a += arr[j][i];
		}
		printf("%d Month: %lf inches\n", i+1, a/5);
		a = 0;
	}
	return 0;
}