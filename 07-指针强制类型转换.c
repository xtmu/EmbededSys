#include <stdio.h>

int main()
{
	int num = 42;
	int *ptr = &num;

	// 将指针地址强制转换为十进制数并打印
	printf("long %d\n",sizeof(long));
	printf("long long %d\n",sizeof(long long));
	printf("Pointer address in decimal: %lu\n", (unsigned long long)ptr);

	return 0;
}
