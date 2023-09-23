#include <stdio.h>

// printf [flags]位测试
int tPrintf()
{
    float a = 1.234;
    float b = 1.234;
    printf("%-7.4f\t%f\n", a, b);  // 右对齐
    printf("%+7.4f\t%f\n", a, b);  // 显示正负号
    printf("% 7.4f\t%f\n", a, b);  // 显示正负号，正号显示为空格
    printf("%010.4f\t%f\n", a, b); // 补零占满列宽
    return 0;
}

// 清理缓冲区
int tFlush()
{

    char ch1;
    printf("input ch1:");
    scanf("%c", &ch1);  // 从标准输入读取整数，并将其存储在变量 age 中
    printf("%c\n", ch1);

    // int c;
    // while ((c = getchar()) != '\n' && c != EOF) { }
    fflush(stdin);

    char ch2;
    printf("input ch2:");
    scanf("%c", &ch2);  // 从标准输入读取整数，并将其存储在变量 age 中
    printf("%c\n", ch2);
    return 0;

}

int main()
{
    // tPrintf();
    tFlush();
}