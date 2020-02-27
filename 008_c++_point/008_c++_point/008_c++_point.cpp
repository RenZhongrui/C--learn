// 008_c++_point.cpp : 定义控制台应用程序的入口点。
/*
	1、什么是指针？
	指针本身就是一个变量，符合变量定义的基本形式，它存储的是值的地址。
	指针变量是专门用来记录变量地址的变量。
	一个变量有3个重要信息，变量类型，变量地址，变量内容值
*/
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	// 2、它存储的是值的地址，例如
	int a = 10; 
	int* p = &a; // &a是取址运算
	cout << *p << endl;// *p是取值运算

	// 3、左值与右值
	// 左值是编译器为其单独分配的一块存储空间，可以取其地址的，左值可以放到赋值运算符左边；
	// 左值一般是函数或变量的名称
	// 右值指数据本身，不能取其自身地址，右值只能赋值运算右边
	// 右值没有标志符，一般称之为临时对象
	// 如&a可以通过编译，a是左值；&(a+b)不能通过编译，a+b是右值；

	// 4、指针的数组(T* arr[])：里面的每一个元素都是指针；如int* arr[2];
	// 数组的指针T(*t) [], t变量本身是个指针
	// 如 int(*b) [4]，[]优先级较高
	// 指针数组是数组，只不过数组的元素是指针；数组指针是指针，只不过指向的对象是数组。
	int c[4] = { 1,2,3,4 };
	int* d[4]; // 指针的数组，里面存储的是int类型的指针元素
	int(*b)[4]; // 数组的指针，b存储的是地址

	// 数组变量名是一个地址常量，这个地址常量表示的大小是随数组变化而变化的。
	// 如：int a[5]; //那么&a就是首个元素的地址，也就是&a[0]；数组存储空间是连续的，所以a+1实际是 &a[1]
	for (unsigned int i = 0; i < 4;i++) {
		d[i] = &(c[i]); // 这里加括号，将int类型数组c中的每一个元素的地址赋值给指针类型的数组中的每一个指针元素
	}
	cout << *(d[1]) << endl;// 取值，先取出数组中的每一个指针元素，然后取值

	b = &c; // 将c首地址赋值给b，指针b指向int类型的数组
	cout << (*b)[1] << endl;// 先取值，获取指针b所指向的数组，然后再取值

	// 5、指向指针的指针
	int x = 1;// 指针变量bb指向aa的地址
	int *y = &x; // 这个表达式相当于*(*z)，从里向外 **z相当于*y
	cout << *y << endl;
	int **z = &y; // 指针z指向了指针y，所以z存放的是y的地址，，指针y指向了x，所以y存放的是x的地址，
	cout << *z << endl; // *z取的是z指向的值，z的值就是y的地址
	cout << **z << endl; // *z取的是z指向的的值，也就是y的地址，*(*z)取的是y指针指向的的值，也就是x的值1

	// NULL指针，一个特殊的指针变量，不指向任何对象，如果一个指针对象不再使用，或者未赋值，就让它指向null
	// 注意：在使用指针的时候最好要判断一下，指针是否为NULL，然后再赋值运算
	int *nu = NULL;
	nu = &x;
	if (nu != NULL) {
		cout << *nu <<endl;
	}
	nu = NULL; // 指针不用时，设为NULL

	// 6、野指针：指向不明确或者指向没有意义的指针，指向垃圾的指针，if判断不了NULL，杜绝野指针; 
	// 如：指针没有初始化 int* p;，指针用完没有设置为NULL，指针操作超越了变量的范围。

	// todo 动态内存分配（new或者malloc）分




    return 0;
}

