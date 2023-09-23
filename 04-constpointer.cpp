#include <iostream>

using namespace std;

class Person
{
private:
	/* data */
public:
	Person(int age, char level);
	~Person();
	int m_Age;
	char m_Level;
};

Person::Person(int age, char level)
{
	this->m_Age = age;
	this->m_Level = level;
}

Person::~Person()
{
}

void testConstClass()
{
	// 普通指针
	Person p1 = Person(10, 'a');
	p1.m_Age = 11;
	cout << p1.m_Age << endl;
	// 对象常量指针使得对象状态不可变
	//  const Person p2=Person(20,'b');
	//  Person const p2=Person(20,'b');
	//  p2.m_Age=11;
	//  cout<<p2.m_Age<<endl;
}

void testConstPointer()
{

	int a = 1;
	const int b = 2;
	int c = 0;

	// 推荐写法
	const int *p;
	p = &a;
	p = &c;
	// const 修饰的是 *p，所以 *p 不是左值
	//  *p =3;

	int const *p2;
	p2 = &a;
	p2 = &c;
	// *p2=3;

	// 指针常量
	int *const p3 = &a;
	// p3=&c;

	a = 3;

	cout << *p << endl;
	cout << *p2 << endl;
	cout << *p3 << endl;
}

int main()
{

	// testConstClass();
	testConstPointer();

	return 0;
}
