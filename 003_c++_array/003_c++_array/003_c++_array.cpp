// 003_c++_array.cpp : �������̨Ӧ�ó������ڵ㡣
// �����������ʹ��

#include "stdafx.h"
#include <iostream>
using namespace std;

int main() 
{
	const int size = 6;
	int arr[size] = {0,1,2,3,4,5};
	// 1��sizeof()�������Է���������ռ���ڴ棬��sizeof(a[0])���ص��������һ��Ԫ����ռ���ڴ档
	int length = sizeof(arr) / sizeof(arr[0]); // ��ȡ���鳤�ȣ������鳤��Ϊ5������ֵֻ��3����ʱ��������Ŀ��ܲ���
	for (int i = 0; i < length; i++) {
		cout << arr[i] << endl;
	}

	// 2��������arr��ֵ��ָ��p
	int* p = arr;
	cout << *p << endl; // ��ȡ�����0��λ�õ���ֵ
	cout << *(p+5) << endl; // ��ȡ�����5��λ�õ���ֵ

	///3����ά����,������2��4�У���0��0�п�ʼ��3�У�3�н���
	int a[2][4] = { 
		{1,2,3,4},
		{5,6,7,8} 
	};
	///4�������ܵĽ�����ѭ�������ڲ����̵�ѭ�������ⲿ����Ϊ��С��ʱ����ڣ����ʵ�ַԽ�ӽ�Խ�죬
	// ����cpu����ѭ����Ĵ���
	cout << "��ά����" << endl;
	for (int row = 0; row < 2; row++) {
		for (int col = 0; col < 4; col ++) {
			cout << a[row][col] << endl;
		}
	
	}

    return 0;
}