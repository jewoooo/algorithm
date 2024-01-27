#include <stdio.h>

void	selecionSort(int *arr, int n) {
	int	i, j, tmp, min_idx;

	for (i = 0; i < n; i++) {
		min_idx = i;
		for (j = i + 1; j < n; j++) {
			if (arr[min_idx] > arr[j])
				min_idx = j;
		}
		tmp = arr[i];
		arr[i] = arr[min_idx];
		arr[min_idx] = tmp;
	}
}

int	main(void) {
	int	arr[10] = {5, 1, 2, 7, 9, 4, 3, 8, 6, 0};
	int	i;

	selecionSort(arr, 10);

	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	
	return 0;
}

/*
selection sort - C Language
Jewoo LEE
*/