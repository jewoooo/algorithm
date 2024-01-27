#include <stdio.h>

void	quicksort(int *data, int start, int end) {
	if (start >= end) {
		return ;
	}

	int	pivot = start;
	int	i = start + 1;
	int	j = end;
	int	temp;

	while (i <= j) {
		while (i <= end && data[i] <= data[pivot]) {
			i++;
		}
		while (j > start && data[j] >= data[pivot]) {
			j--;
		}
		if (i > j) {
			temp = data[j];
			data[j] = data[pivot];
			data[pivot] = temp;
		} else {
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
	}

	quicksort(data, start, j - 1);
	quicksort(data, j + 1, end);
}

int	main(void) {
	int	i;
	int	number = 10;
	int	data[] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

	quicksort(data, 0, number - 1);

	for (i = 0; i < 10; i++) {
		printf("%d ", data[i]);
	}
	return 0;
}
