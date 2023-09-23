#pragma once

#ifndef __XFUNC_H__
#define __XFUNC_H__

//多文件编译需要 make 或 cmake。

#pragma warning(disable:4996)

#include<stdio.h>

#include<iostream>

using namespace std;

/********************************************数组类****************************************/
/*开辟二维数组*/
int** newArray2D(int m, int n);
/*释放二维数组*/
int deleteArray2D(int** array2D);
/*输入二维数组*/
int scanfArray2D(int** p, int m, int n);
/*输出二维数组*/
int printfArray2D(int **p, int m, int n);

int hello();

#endif