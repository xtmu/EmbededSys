#include <iostream>

using namespace std;

void printArr(int Arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << Arr[i] << ' ';
	}
	cout << endl;
}

void printChArr(char Arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << Arr[i];
	}
	cout << endl;
}

int main()
{
	// 列表初始化
	//  int numArr[] = {1,2,3,4,5};
	int numArr[3] = {1};
	int size = 5;
	printArr(numArr,size);

	char chArr[] = {'h', 'e', 'l', 'l', 'o', '\0'};
	cout << sizeof(chArr);

	// 字符串初始化字符数组
	char str[] = "hello";
	printChArr(str, sizeof(str) / sizeof(char));

	// 动态初始化
	int *dynArr = (int *)malloc(size * sizeof(int)); // 不初始化
	printArr(dynArr,size);
	free(dynArr);
	int *dynArr2 = (int *)calloc(1,size*sizeof(int)); // 分配 1 段参数二大小的空间，并初始化为零
	printArr(dynArr2,size);
	free(dynArr);

	// // cout<<sizeof(numArr);
	// int len = sizeof(numArr) / sizeof(int);
	// cout << len << endl;
	// printArr(numArr, len);

	return 0;
}
