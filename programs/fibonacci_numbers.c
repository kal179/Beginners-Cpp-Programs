

#include <stdio.h>
#include <stdlib.h>


// Recursive implementation of fib number generator
int fibs_recursive(int limit);
// Dynamic implementation 
int fib_dynamic(int limit);


int main(void) {
	int extent;
	printf("Limit?  "); scanf("%d", &extent);
	printf("Fib at %d: %d\n", extent, fib_dynamic(extent));
	return 0;
}


int fibs_recursive(int limit) {
	if (limit <= 1) {
		// Base case
		return limit;
	} else {
		// f(n) = f(n-2) + f(n-1)
		return fibs_recursive(limit-2) + fibs_recursive(limit-1);
	}
}


int fib_dynamic(int limit) {
	// Array to store fib nums
	int fib[limit];

	// Start numbers
	fib[0] = 0;
	fib[1] = 1;

	// Further numbers generation
	for (int i = 2; i < limit; i++) {
		fib[i] = fib[i-2] + fib[i-1];
	}

	// Returning desired fib number
	return fib[limit-1];

}
