#include <stdio.h>

int main()
{
	int array[10];
	int i;
	
	for (i = 0; i < 10; i++) {
		if (array[i] < 0 && array[-array[i] - 1] >= 0) {
			printf("%2d\n", array[-array[i] - 1]);
		}

		if (array[i] < 0 && array[-array[i] - 1] < 0) {
			printf("%2d\n", array[-array[i]]);
		}

		
	}
	printf("\n");

	return 0;
}
