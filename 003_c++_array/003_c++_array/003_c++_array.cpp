// 003_c++_array.cpp : �������̨Ӧ�ó������ڵ㡣
// �����������ʹ��

#include "stdafx.h"
#include <iostream>
using namespace std;

int main() 
{
	const int size = 6;
	int arr[size] = {0,1,2,3,4,5};
	// sizeof()�������Է���������ռ���ڴ棬��sizeof(a[0])���ص��������һ��Ԫ����ռ���ڴ档
	int length = sizeof(arr) / sizeof(arr[0]); 
	for (int i = 0; i < length; i++) {
		cout << arr[i] << endl;
	}
    return 0;
}