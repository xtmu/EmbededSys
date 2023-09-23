// #include "xfunc.h"
#include "algorithm.h"
// #include <iostream>
// #include <stdio.h>

using namespace std;

int main()
{

	int m, n;
	m = 2;
	n = 3;

	int arr[10]{1};
	int narr = 10;
	cout << "arr\t" << (unsigned long long)arr << endl; // arr 是数组首元素地址
	cout << "arr+1\t" << (unsigned long long)(arr + 1) << endl; 
	cout << "sizeof(arr)\t" << sizeof(arr) << endl;
	cout << "&arr+1\t" << (unsigned long long)(&arr + 1) << endl; // &arr 是数组地址

	cout << "&arr[0]\t" << (unsigned long long)&arr[0] << endl; // arr 等价于 &arr[0]
	cout << "&arr\t" << (unsigned long long)&arr << endl;
	// cout << "&(arr+1)\t" << (unsigned long long)(&(arr + 1)) << endl;
	print_arr(arr, narr);
	getchar();

	int a[2][3];
	// 数组指针
	int(*p)[3] = a;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			p[i][j] = 1;
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << p[i][j];
		}
		cout << endl;
	}

	// int a = 3;
	// // cout << "a:\t" << (unsigned)&a << endl;
	// printf("%lu\n", (unsigned long long)ptr);

	// unsigned long long adr = (unsigned long long)&p;
	// cout << "&p\t" << (unsigned long long)&p << endl;
	cout << "&p\t" << (unsigned long long)&p << endl;
	// cout << "&p\t" << adr << endl;

	// 指针数组

	fflush(stdin);
	getchar();

	return 0;
}
