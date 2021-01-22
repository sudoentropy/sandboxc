//insertion sort algo in non increasing variant

#include <math.h>
#include <stdio.h>

void insertionSort(int arr[], int n) {

	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[1];
		j = i -1;

		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

int main() {
	return 0;
}
