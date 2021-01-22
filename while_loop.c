#include <stdio.h>

/* f to c converterish thing*/
int main() {
	
	int f, c;
	int low, top, incr;

	low = 0;
	top = 2500;
	incr = 10;

	f = low;

	while (f<=top) {
		c = 5*(f-32)/9;
		printf("%d\t%d\n", f, c);
		f = f+incr;}
}
