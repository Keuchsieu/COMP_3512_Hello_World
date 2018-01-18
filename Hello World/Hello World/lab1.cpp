#include "lab1.h"


// Greatest Common Denominator
// PRE: a is a positive integer
// PRE: b is a positive integer
// POST: a and b are unchanged
// RETURN: the greatest common denominator of a and b.
int gcd(const int a, const int b)
{
	int big, small;
	if (a == b) {
		return a;
	}
	else if (a > b) {
		big = a;
		small = b;
	}
	else {
		big = b;
		small = a;
	}
	if (big%small == 0) {
		return small;
	}
	else {
		return gcd(small, big%small);
	}
	return 0;
}

// Fibonacci
// PRE: n is a positive int greater than 0
// POST: n is not changed
// RETURN: the nth positive integer in the Fibonacci sequence.
long long fibonacci(const int n)
{
	if (n == 1) {
		return 1;
	}
	else if (n == 2) {
		return 1;
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
	// Replace this line with your code (challenge: do this with recursion!).
	return 0;
}
