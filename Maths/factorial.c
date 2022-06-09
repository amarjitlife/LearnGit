
#include <stdio.h>

int factorial(int n);
long factorialLong(long n);

int factorial(int n) {
	if ( n == 1 || n == 0 ) {
		return 1;
	} else {
		return n * factorial( n - 1 ) ;
	}
}

long factorialLong(long n) {
	if ( n == 1 || n == 0 ) {
		return 1;
	} else {
		return n * factorial( n - 1 ) ;
	}
}

