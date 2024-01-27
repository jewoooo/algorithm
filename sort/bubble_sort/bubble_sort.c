#include <stdio.h>

void	bubbleSort(int *arr, int n) {
	int	i, j, tmp;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int	main(void) {
	int	arr[10] = {5, 1, 2, 7, 9, 4, 3, 8, 6, 0};
	int	i;

	bubbleSort(arr, 10);
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	
	return 0;
}
