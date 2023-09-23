#include <iostream>

using namespace std;

int main()
{
    char s1[] = "hello world"; // s1 是字符数组，数组的每个元素都可以修改。
    char *s2 = "hello world";  // s2 是字符型指针，指向字符串常量的第一个字符，字符串常量是不可修改的。

    cout << s1 << endl;
    cout << s2 << endl;
    cout << "---------------"<< endl;

    *s1 = 'A'; //正常
    // *s2 = 'A'; // 报错

    cout << s1 << endl;
    cout << s2 << endl;

    return 0;
}
