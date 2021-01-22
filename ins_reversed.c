//insertion sort algo increases through keys 

#include <math.h>
#include <stdio.h>

void insertionSort(int arr[], int n) {

	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;
		
		//while my card is not at zero and less than keys
		//work up until all cards sorted
		while (j >= 0 && arr[j] < key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

int main() {
	return 0;
}
