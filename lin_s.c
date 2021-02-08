//linear search implementation in c
//source: journaldev.com

#include <stdio.h>

int linSearch(int inputArray[], int sizeArray, int val) {

	for (int i= 0; i < sizeArray; i++)
		if (inputArray[i] == val)
			return i;
	return -1;
}

int main(void) {
	int arr[] = {1, 2, 3, 4, 56, 7, 8, 9, 10};
	int key = 7;
	int size = 9;
	int res = linSearch(arr, size, key);
	if (res == -1)
		printf("Elelemt NOT FOUND");
	else 
	printf("Element present at index %d", res);

	return 0;
}
