#include<iostream>
using namespace std;

void test01() {
	char a[] = { 'a','b','c' };
	char b[] = { "abc" };
	cout << "a�Ĵ�СΪ��" << sizeof(a) << endl;
	cout << "b�Ĵ�СΪ��" << sizeof(b) << endl;
	//�ַ��������û���Զ�`\0'���ַ���������
}

int* f() 
{ 
	int a[3] = { 1, 2, 3 };
	return a;
}

//void f(int* ret) { int a[3] = { 1, 2, 3 }; ret = a++; return; }
// ��������Ϊ����ָ�벻����Ϊ��ֵ�������ֵ������ʽ��
//��Ϊ�����ڶ���������Ǿֲ��������ں������غ��ڴ汻�ͷţ�ͨ��ָ���޷��ٷ���

//int* f() { int a[3] = { 1, 2, 3 }; return a; }
//��Ϊ�����ڶ���������Ǿֲ��������ں������غ��ڴ汻�ͷţ�ͨ��ָ���޷��ٷ���

int main() {

	//test01();
	f();
	return 0;
}