#include<iostream>
using namespace std;

#define MAX 255
//
//int main() {
//    unsigned char A[MAX], i;
//    for (i = 0; i <= MAX; i++)
//        A[i] = i;
//}
/*1.�����±귶Χ��0~MAX - 1, ��ѭ����i = MAXʱ��A[i] = A[MAX]����ʱ���鷢����Խ��
2.i��������unsigned char����i��ȡֵ��Χ��0~255�����Ե�i = 255ʱ��i + 1 = 255 + 1��ᵼ��i = 0�����for(i = 0; i <= MAX; i++)��һֱѭ����ȥ */



//int main()
//{
//    static char* s[] = { "black", "white", "pink", "violet" };
//    char** ptr[] = { s + 3, s + 2, s + 1, s }, *** p;
//    p = ptr;
//    ++p;
//    printf("%s", **p + 1);
//    return 0;
//}

//ink    
// p = ptr;
//++p;
//
//����* p = ptr[1] = s + 2;
//
//**p = &(s + 2
//	) =
//	&"pink";
//
//
//**p + 1 = &"ink";
//
//���Խ����ink;
