// 005_c++_operations.cpp : �������̨Ӧ�ó������ڵ㡣
/*
���������
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{

	int a = 3;
	// sizeof:���ر����Ĵ�С
	cout << sizeof(a) << endl; // ���4
	// ��Ŀ�����
	int b = 2;
	int c = a > b ? a : b;
	cout << c << endl; // ���3
					   // ���������
	int d = (1, 2, 3);
	cout << d << endl; // �������һ����3

	// Case ǿת�����
	// &ȡַ���㣬��&a����ȡ����a���ڴ��ַ

	// *ָ���������ָ��һ������
	int *p = &d; // ������d�ĵ�ַ��ֵ��p
	cout << p << endl; // ����d�ĵ�ַ ����008FFDA8
	cout << *p << endl; // *ȡֵ���㣬��ָ��p��ָ��ĵ�ַ��ֵȡ��������3

	// ����ṹ��
	typedef struct {
		short Sundy = 0;
		short Monday = 1;
		short Tuesday = 2;
		short Wednesday = 3;
		short Thursday = 4;
		short Friday = 5;
		short Saturday = 6;
	} Week;

	Week week;
	cout <<week.Sundy << endl; // ���0
	cout << sizeof(week) << endl; // ���14��һ��shortռ���ֽڣ�7��short = 14���ṹ��Ĵ�С�����г�Ա�����ĺ�
	// ���ڴ洢����ʱ��ַ�����Ҫ�󣬱������ڱ������ʱ����ѭ����ԭ��

	//һ����Ա��ƫ���������ǳ�Ա��С����������0����Ϊ���κ���������������

	//	�����ṹ���С���������г�Ա��С����������
	// ���Բ�һ�������б���֮�ͣ�������������

    return 0;
}

