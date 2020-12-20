#include <stdio.h>
#include <stdlib.h>
#include "item.h"

int partition(Item a[], int l, int r);
void quicksort(Item a[], int l, int r) {
	int i;
	if (r <= 1) return;
	i = partition(a, l, r);
	quicksort(a, l, i-1);
	quicksort(a, i+1, r);}
