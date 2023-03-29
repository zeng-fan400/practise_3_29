#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int a = 10;
//	//printf("%d\n", ++a);//前置++，先++，后使用
//	printf("%d\n", a++);//后置++，先使用，后++
//	return 0;
//}

//程序判断
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//4
//}
//
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//4
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(ch));//10
//	test1(arr);//数组传参传的是数组首元素的地址 -- 用指针接收
//	test2(ch);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	//c = a && b;//逻辑与 -- 只要左边为假，右边就不再计算
//	c = a || b;//逻辑或 -- 只要左边为真，右边就不再计算
//	printf("%d\n", c);
//	return 0;
//}

//int main()//条件操作符
//{
//	int a = 8;
//	int b = 10;
//	int c = 0;
//	c = a > b ? a : b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 1;
//	int c = 3;
//	int d = 109;
//	int i = 0;
//	printf("%d\n", (a + 1, b + 10, c - 2, d + 1));
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 10;
//	struct Stu s1 = { "曾钒",24,"112021333342619" };
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//	struct Stu* ps = &s1;
//	printf("%s\n", (*ps).name);
//	printf("%s\n", ps->name);
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	char b = 127;
//	//a -- 0000 0000 0000 0000 0000 0000 0000 0011
//	//b -- 0000 0000 0000 0000 0000 0000 0111 1111
//	//0000 0011
//	//0111 1111
//	//1000 0010
//	//1000 0001
//	//1111 1110 -- -126
//	char c = a + b;
//	printf("%d\n", c);
//	return 0;
//}
//
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb60000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb60000)
//		printf("c");
//	return 0;
//}

