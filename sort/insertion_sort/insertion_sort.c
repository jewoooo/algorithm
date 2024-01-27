#include <stdio.h>

void	insertionSort(int *arr, int n) {
	int	i, j, tmp;

	for (i = 0; i < 10; i++) {
		j = i;
		while (j > 0 && arr[j - 1] > arr[j]) {
			tmp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = tmp;
			j--;
		}
	}
}

int	main(void) {
	int	arr[10] = {5, 1, 2, 7, 9, 4, 3, 8, 6, 0};
	int	i;

	insertionSort(arr, 10);
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	
	return 0;
}
