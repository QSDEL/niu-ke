#include<iostream>
using namespace std;

#define MAX 255
//
//int main() {
//    unsigned char A[MAX], i;
//    for (i = 0; i <= MAX; i++)
//        A[i] = i;
//}
/*1.数组下标范围是0~MAX - 1, 当循环到i = MAX时，A[i] = A[MAX]，此时数组发生了越界
2.i的类型是unsigned char，即i的取值范围是0~255，所以当i = 255时，i + 1 = 255 + 1后会导致i = 0，因此for(i = 0; i <= MAX; i++)会一直循环下去 */



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
//所以* p = ptr[1] = s + 2;
//
//**p = &(s + 2
//	) =
//	&"pink";
//
//
//**p + 1 = &"ink";
//
//所以结果是ink;
