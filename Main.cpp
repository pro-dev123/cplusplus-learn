#include <stdio.h>

int n_sum(int n); // n for bigger or same as 0

int main(void)
{
	int sum;
	sum = n_sum(10);

	printf("%d", sum);

	return 0;
}

int n_sum(int n)
{
	if (n == 0) return 0;
	return n + n_sum(n - 1);
}