// adding tw0 n-bit binary integers
// n bit binary integers are stored in 2 n element arrays [A] and [B]
// [A]i + [B]i --> [C]
// [C] is an n+1 element array


// first code attempt

/*
#include <stdio.h>

A = []
B = []
C = []

int main() {
	C == Ai + Bi
};
*/

// check solution
// ok waaay off, but we already knew that
//
// first understand binary addition algo
//
//0+0 = 0
//1+0 = 1
//0+1 = 1
//1+1 = 1 and carry = 1
//
//source: cquestions.com

#include <stdio.h>

int main() {

	long int binary1, binary2;
	int i=0, remainder = 0, sum[20];

	printf("enter binary1: ");
	scanf("%ld" ,&binary1);
	printf("enter binary2: ");
	scanf("%ld" ,&binary2);

	while(binary1!=0||binary2!=0) {
		sum[i++] = (binary1 %10 + binary2 %10 + remainder) % 2;
		remainder = (binary1 %10 + binary2 %10 + remainder) / 2;

		binary1 = binary1 / 10;
		binary2 = binary2 / 10;
	}

	if(remainder!=0)
		sum[i++] = remainder;

	--i;

	printf("sum of 1 && 2 == ");
	while(i>=0)
		printf("%d", sum[i--]);
		printf("\n");
	return 0;
}
















