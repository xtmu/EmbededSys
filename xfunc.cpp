#include"xfunc.h"

/*开辟二维数组*/
int** newArray2D(int m, int n)
{
	int *array1D = new int[m*n]();
	int **array2D = new int*[m];
	for (int i = 0; i < m; i++)
	{
		array2D[i] = &array1D[i*n];
	}
	return array2D;
}

/*释放二维数组*/
int deleteArray2D(int** array2D)
{
	delete[] array2D[0];
	delete[] array2D;
	return 0;
}

/*二维数组输入*/
int scanfArray2D(int** p, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &p[i][j]);
		}
	}
	return 0;
}

/*二维数组输出*/
int printfArray2D(int **p, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			j ? printf(" ") : printf("");
			printf("%d", p[i][j]);
		}
		printf("\n");
	}
	return 0;
}