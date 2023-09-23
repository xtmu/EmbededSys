#include <iostream>

using namespace std;

void test_cpp_getline()
{
    string s;
    // 行字符串
    getline(cin, s);
    for (int i = 0; i < s.length(); ++i)
    {
        cout << i << ":" << (int)s[i] << endl;
    }
}

void test_gets()
{
    char s[10] = {};
    for (int i = 0; i < sizeof(s); i++)
    {
        s[i] = 'x';
    }
    // gets 读取一行并把读到的 '\n' 换成 '\0' 结束字符串
    gets(s);
    puts(s);

    // char ch=getchar();
    // cout<<ch;

    for (int i = 0; i < sizeof(s); i++)
    {
        cout << i << ":" << (int)s[i] << endl;
    }
}

void test_scanf()
{
    char s[10];

    // 无空格字符串
    // scanf("%s",&s);

    // 无空格字符串
    // scanf("%[^ ]", &s);

    // 一行字符串
    // scanf("%[^\n]", &s);
    // getchar();

    printf("\n|%s|\n", s);
}

int main()
{

    // test_scanf();

    // test_cpp_getline();

    test_gets();

    return 0;
}
