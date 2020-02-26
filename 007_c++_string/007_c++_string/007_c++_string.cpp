// 007_c++_string.cpp : �������̨Ӧ�ó������ڵ㡣

#include "stdafx.h"
#include <iostream>
#include <string.h>
using namespace std;
/*
c++�ж����ַ������Կ��ַ�('\0')�������ַ�����,
���ַ�('\0')���Զ���ӵ��ַ������ڲ���ʾ��

ע�Ϳ�ݼ���ctrl+k+c ��ע�ͣ�ctrl+k+u
*/

int main()
{
	// һ���ַ����ı�ʾ
	// 1���ַ�������
	char str1[] = {"hello world"}; // �ڴ�ָ������������Ը��������ڵ�ֵ�����鱾���ɸ���
	cout << str1 << endl;
	
	// 2��0,'\0','0'������
	// ������������ʾ��0��0x00��'\0'��0x00��'0'��ʮ��������0x30 ʮ���ƾ���48
	char c1 = 0;
	char c2 = '\0';
	char c3 = '0';


	// 3���ַ�����ָ���ʾ��
	char* str2 = "Hello String"; // �ڴ�ָ��������ָ���ֵ�ǳ����򲻿ɸ��ģ���������Ըı䣬ָ�뱾����Ըı�
	cout << str2 << endl;

	// �����ַ����ĳ������� ����string.hͷ�ļ�

	// 1���ַ�������
	int length = strlen(str2);
	cout << "��ȡ�ַ������ȣ�" << endl;
	cout << length << endl;
	cout << "��ȡ�ַ���ռ�ÿռ䣺" << endl;
	cout << sizeof(str2) << endl;

	// 2���ַ����ıȽϣ�a > b����ֵ����0��a < b����ֵС��0�� a = b����ֵ����0
	// �ȽϹ������ַ����������ұȽ��ַ���ASCIIֵ��ֱ��'\0'����
	int result = strcmp(str1, str2);
	cout << "�ַ����ıȽϣ�" << endl;
	cout << result << endl;

	// 3���ַ�����������str2���ݸ��Ƶ�str1
	char str3[16] = { 0 };
	strcpy_s(str3, str1); // ��ȫ�Ŀ���
	cout << "�ַ����Ŀ�����" << endl;
	cout << str3 << endl;
	
	// 4���ַ������������ַ���str2ǰn���ַ���������str3��
	strncpy_s(str3, str2, 2);
	cout << "���ַ���str2ǰn���ַ���������str3�У�" << endl;
	cout << str3 << endl;

	// 5���ַ���ƴ��
	cout << "���ַ���str1ƴ�ӵ�str3�У�" << endl;
	strcat_s(str3, str1);
	cout << str3 << endl;

	// 6�������ַ�������h��һ�γ��ֵ�λ��
	cout << "�����ַ�������h��һ�γ��ֵ�λ�ã�" << endl;
	char* index1 = strchr(str1, 'r');
	cout << index1 << endl; // ����r֮������� rld��������r���ڵĺ�����Ӵ�

	// 7�������ַ����������ַ�����һ�γ��ֵ�λ��
	cout << "�����ַ���������h��һ�γ��ֵ�λ�ã�" << endl;
	char* index2 = strstr(str1, "wo"); // ���wo��str1�У��򷵻�wo������ַ�������wo���ڵ��ַ���
	cout << index2 << endl;// ����world

	// 8���ַ���string
	string stri = "c++ string";
	string stri2 = "string";
	int length1 = stri.length();// �ַ�������
	int length2 = stri.size(); // �ַ�����С
	int capacity = stri.capacity(); // ����
	cout << "�ַ������ȣ�" << endl;
	cout << length << endl; // 10
	cout << length2 << endl;// 12
	cout << capacity << endl;// 15
	cout << (stri == stri) << endl; // ���ȷ���0����ȷ���1

	// 9��c++�����ַ���ת��Ϊc�����ַ���
	const char* c_str = stri.c_str();
	cout << c_str << endl;

	// 10��ͨ��[index]�������ĳ���ַ�
	char s = stri[2];
	cout << s << endl;

	// 11���ַ�����ֵ��ʹ��=��
	string s1 = "ddd";
	cout << s1.c_str() << endl;

	// 12��ʹ�����ӷ���+
	string s3 = stri + s1;
	cout << s3.c_str() << endl;

    return 0;
}

