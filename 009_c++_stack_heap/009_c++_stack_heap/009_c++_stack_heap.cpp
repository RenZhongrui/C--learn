// 008_c++_stack_heap.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int a = 0; // GVARȫ�ֳ�ʼ����
int* p4; // bssȫ��δ��ʼ����
int main()
{

	int b = 1; // stackջ������
	char s[] = "abc"; // stackջ������
	int* p = NULL; // stackջ������
	char* p1 = "123456"; // 124567\0�ڳ�������p1��stackջ��
	static int c = 0; // (GVAR)ȫ�֣���̬����ʼ����
	int* p2 = new int(10); // heap��������
	char* p3 = new char[7]; // heap��������
	strcpy_s(p3, 7, "123"); // text������
	if(p2 != NULL){
		delete p2;
		p2 = NULL;
	}
	if (p3!=NULL) {
		// ɾ�����飬�ͷ���Դ
		delete[] p3;
		p3 = NULL;
	}	
    return 0;
}

