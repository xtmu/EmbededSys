//参考链接：https://www.cnblogs.com/huipengbo/p/9774903.html 
#pragma once

#ifndef __ALGORITHM_H__
#define __ALGORITHM_H__

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<math.h>
#include<time.h>
#include<string.h>
#include<iostream>
using namespace std;

/********************************************操作类********************************************/
/*入栈*/
int push(int tmp);
/*出栈*/
int pop();
/*交换位置*/
int swap(int &a, int &b);
/*数组翻转*/
int* reverse_arr(int arr[], int start, int end);
/*输入数组*/
int scan_arr(int arr[], int n); 
/*显示数组*/
int print_arr(int arr[], int n);
/*二维数组输入*/
int scan_arr2(int**p, int m, int n);
/*二维数组输出*/
int print_arr2(int **p, int m, int n);
/*创建二维数组*/
int** new_arr2(int m, int n);
/*删除二维数组*/
int delete_arr2(int**array2D);
/*冒泡排序*/
int bubble_sort(int *p, int n);
/*数组插入元素*/
int insert_element(int*&p, int &n, int tmp, int pos);
/*删除数组元素*/
int delete_element(int *p, int &n, int pos);
/*矩阵转置*/
int** transpose(int**array2D, int &m, int &n);


/********************************************判断类********************************************/
/*判断水仙花数*/
int is_narcissi(int num);
/*判断回文数*/
int is_palindrome(int num);
/*判断素数*/
bool is_prime(int n);
/*数列有序判断*/
int is_sorted(int *p, int n);


/********************************************求解类********************************************/
/*最大公约数与最小公倍数*/
int gcd(int m, int n, int &gcd, int &lcm);//传引用根源:int &别名=实参(实体) 传引用的形参其实就是实参本体,只不过在子函数中可以不用叫原名，可以另起名字这里gcd就是他的别名
/*牛顿迭代解三次方程*/
double diedai(double a, double b, double c, double d, double x);
/*找元素返回下标*/
int find_pos(int arr[], int n, int tmp);
/*二分查找*/
int binary_search(int *p, int n, int tmp);
/*返回二分插入位置*/
int binary_pos(int*p, int n, int tmp);

/*输出到txt*/
void output2txt();
















#endif 