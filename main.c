#include <stdio.h>

int main()
{
	int array[10] = { 4, 2, 5, -1, 21, 3, -6, 12, -9, 6 };
	int i;

	for (i = 0; i < 10; i++) {
		if (array[i] < 0 && array[-array[i] - 1] >= 0) {
			printf("%3d\n", array[-array[i] - 1]);
		}

		if (array[i] < 0 && array[-array[i] - 1] < 0) {
			printf("%3d\n", array[-array[i]]);
		}

		
	}
	printf("\n");

	return 0;
}
