#include"algorithm.h"
#include"define.h"

/*输出到txt*/
void output2txt()
{
	FILE *fp;
	errno_t err = fopen_s(&fp, "C:\\Users\\init\\Desktop\\output.txt", "w");
	if (err != 0)
	{
		printf("打开失败\n");
	}

	for (int i = 0; i < 400; i++)
	{
		fprintf_s(fp, "t%d();\n", i);
	}

	fclose(fp);
}

/*矩阵转置*/
int** transpose(int**array2D, int &m, int &n)
{
	int **array2D_T = new_arr2(n, m);//n*m空间
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < m; i++)
		{
			array2D_T[j][i] = array2D[i][j];
		}
	}
	delete_arr2(array2D);
	swap(m, n);
	return array2D_T;
}

/*创建二维数组*/
int** new_arr2(int m, int n)
{
	int *array1D = new int[m*n]();
	int **array2D = new int*[m];
	for (int i = 0; i < m; i++)
	{
		array2D[i] = &array1D[i*n];
	}
	return array2D;
}

/*删除二维数组*/
int delete_arr2(int**array2D)
{
	delete[] array2D[0];
	delete[] array2D;
	return 0;
}

/*二维数组输入*/
int scan_arr2(int**p, int m, int n)
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
int print_arr2(int **p, int m, int n)
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

/*找元素返回下标*/
int find_pos(int arr[], int n, int tmp)
{//tmp为待找元素
	for (int i = 0; i < n; i++)
	{
		if (tmp == arr[i])
			return i;
	}
	return -1;
}

/*栈操作*/
int push(int tmp)
{
	stack[top++] = tmp;
	return 0;
}
int pop()
{
	return stack[--top];
}

/*交换位置*/
int swap(int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
	return 0;
}

/*水仙花数*/
int is_narcissi(int num)
{
	if (99 < num&&num < 1000)
	{
		int o, t, h;
		h = num / 100;
		t = num % 100 / 10;
		o = num % 10 / 1;
		return num == h*h*h + t*t*t + o*o*o;
	}
	else
		return -1;
}

/*最大公约数与最小公倍数*/
int gcd(int m, int n, int &gcd, int &lcm)//传引用根源:int &别名=实参(实体) 传引用的形参其实就是实参本体,只不过在子函数中可以不用叫原名，可以另起名字这里gcd就是他的别名
{
	int r, p = m*n;
	while (n != 0)//这个n是从r赋值来的
	{
		r = m%n;
		m = n;//返回的是m
		n = r;
	}
	gcd = m;
	lcm = p / gcd;
	return 0;
}

/*判断回文数*/
int is_palindrome(int num)
{
	int o = num, h, t, r = 0;
	h = num;//别忘了h初值
	while (h != 0)
	{
		t = h % 10;
		h /= 10;
		r = r * 10 + t;//关键代码
	}
	if (r == o)
		return 1;
	else
		return 0;
}

/*判断素数*/
//int is_prime(int num)
//{
//	double q;
//	int i;
//	q = sqrt(num);
//	for (i = 2; i < q; i++)
//	{
//		if (num%i == 0)
//			break;
//	}
//	if (i > q&&num != 0 && num != 1)
//		return 1;
//	else
//		return 0;
//}

/*sexy prime*/
bool is_prime(int n)
{
	if (n <= 3) return n > 1;
	if (n % 2 == 0 || n % 3 == 0) return false;
	double k = sqrt(n) ;//避免浮点运算
	for (int i = 5; i<k; i += 6)
		if (n % i == 0 || n % (i + 2) == 0) return false;
	return true;
}

/*三次方程牛顿迭代*/
double diedai(double a, double b, double c, double d, double x)
{
	while (fabs(a*x*x*x + b*x*x + c*x + d)>0.000001)
	{
		x = x - (a*x*x*x + b*x*x + c*x + d) / (3 * a*x*x + 2 * b*x + c);
	}
	return x;
}

/*数组翻转*/
int* reverse_arr(int arr[], int start, int end)
{
	while (start < end)
	{
		swap(arr[start], arr[end]);
		start++;
		end--;
	}
	return 0;
}

/*数组输入*/
int scan_arr(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	return 0;
}

/*数组输出*/
int print_arr(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		i ? printf(" ") : printf("");//输出空格，首格除外
		printf("%d", arr[i]);
	}
	printf("\n");
	return 0;
}

/*冒泡排序*/
int bubble_sort(int *p, int n)
{
	for (int i = 0; i < n - 1; i++)
	{//n-1趟
		bool flag = true;
		for (int j = 0; j < n - 1 - i; i++)//j的右限是 n-1-i 哦
		{//右下三角是排好的
			if (p[j] > p[j + 1])
			{
				swap(p[j], p[j + 1]);
				flag = false;
			}
		}
		if (flag)
			break;
		//print_arr(p, n);
	}
	//printf("sorted:"); print_arr(p, n);
	return 0;
}


//数组插入元素
int insert_element(int*&p, int &n, int tmp, int pos)
{
	if (!p)
	{
		printf("数组插入元素>>数组指针不能为空!!!\n");
		return -1;
	}
	p = (int*)realloc(p, ++n*sizeof(int));//这里指针自身可能得改变，因此需要指针引用
	if (!p)
	{
		printf("数组插入元素>>内存不足!!!\n");
		return -2;
	}
	for (int i = n - 1; i > pos; i--)
	{
		p[i] = p[i - 1];
	}
	p[pos] = tmp;
	return 0;
}

//数列有序性判断(及正逆)
int is_sorted(int *p, int n)
{
	if (p[0] < p[n - 1])
	{//正序判断
		for (int i = 0; i < n - 1; i++)
		{
			if (p[i] > p[i + 1])
				return 0;
		}
		return 1;
	}
	else if (p[0]>p[n - 1])
	{//倒序判断
		for (int i = 0; i < n - 1; i++)
		{
			if (p[i] < p[i + 1])
				return 0;
		}
		return -1;
	}
	else
	{//常数列判断
		for (int i = 0; i < n - 1; i++)
		{
			if (p[i] != p[i + 1])
				return 0;
		}
		printf("数列正逆序判断>>常数列!\n");
		return 1;
	}
}

//二分查找
int binary_search(int *p, int n, int tmp)
{
	int left = 0, right = n - 1, mid;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (tmp < p[mid])
		{//左半边
			right = mid - 1;
		}
		else if (tmp>p[mid])
		{
			left = mid + 1;
		}
		else
			return mid;
	}
	printf("二分查找>>未找到!\n");
	return -1;
}

//二分插入位置
int binary_pos(int*p, int n, int tmp)
{
	if (is_sorted(p, n) != 1)
	{
		printf("二分插入位置>>请输入正序数列!!!\n");
		return -1;
	}
	int left = 0, right = n - 1, mid;
	while (left <= right)
	{
		mid = (left + right) / 2;//※
		if (tmp < p[mid])
		{//左半边
			right = mid - 1;
		}
		else if (tmp>p[mid])
		{
			left = mid + 1;
		}
		else
		{
			//printf("相等\n"); 
			return mid;
		}
	}
	return left;//此时恰翻转，left=right+1； ☆记住返回的是left
}


/*删除数组元素*/
int delete_element(int *p, int &n, int pos)
{
	if (0 <= pos&&pos < n)
	{
		n--;//数组长度减1
		for (int i = pos; i < n; i++)
		{
			p[i] = p[i + 1];
		}
		return 0;
	}
	else
	{
		printf("删除数组元素>>pos非法!!!\n");
		return -1;
	}
}