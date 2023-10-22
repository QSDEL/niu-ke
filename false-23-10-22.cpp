#include<iostream>
using namespace std;

void test01() {
	char a[] = { 'a','b','c' };
	char b[] = { "abc" };
	cout << "a的大小为：" << sizeof(a) << endl;
	cout << "b的大小为：" << sizeof(b) << endl;
	//字符数组后面没有自动`\0'，字符串后面会加
}

int* f() 
{ 
	int a[3] = { 1, 2, 3 };
	return a;
}

//void f(int* ret) { int a[3] = { 1, 2, 3 }; ret = a++; return; }
// 数据名作为常量指针不能作为赋值运算符左值参与表达式。
//因为函数内定义的数组是局部变量，在函数返回后内存被释放，通过指针无法再访问

//int* f() { int a[3] = { 1, 2, 3 }; return a; }
//因为函数内定义的数组是局部变量，在函数返回后内存被释放，通过指针无法再访问

int main() {

	//test01();
	f();
	return 0;
}