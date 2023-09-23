#include <stdio.h>

int func(int &a, int& b)
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	return 0;
}

int main()
{
	int a = 10;
	int b = 121231;

	printf("%d %d\n",a,b);
	func(a, b);
	printf("%d %d\n",a,b);
	
	getchar();

	return 0;
}
