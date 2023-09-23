#include <stdio.h>

int factorial(int n)
{
	/* 递归求阶乘 */
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n * factorial(n - 1);
	}
}

int sumfactorial(int n)
{
	/* 迭代求 !1+!2+!3+!4+...+!n */
	int sum = 0;
	int temp = 1;
	for (int i = 1; i <= n; i++)
	{
		temp *= i;
		sum += temp;
	}
	return sum;
}

int main()
{
	int a = 4;

	printf("%d\n", factorial(a));
	printf("%d\n", sumfactorial(a));

	return 0;
}
