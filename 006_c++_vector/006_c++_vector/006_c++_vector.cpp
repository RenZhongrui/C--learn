// 006_c++_vector.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
// ����vector
#include <vector>
using namespace std;

int main()
{
	vector<int> vec = {1,2,3,4};
	vec.push_back(5); // ��β��׷������
	cout << "��β��׷������" << endl;
	for (int i = 0; i < vec.size();i++) {
		cout << vec[i] << endl;
	}

	cout << "vector�ܹ����ɵ����������Լ������ݷ�ʽ" << endl;
	cout << vec.capacity() << endl;


	// �����������һ���������������ڶ�����������ֵ
	cout << "�ڵ����ڶ�����������6" << endl;
	vec.insert(vec.end()-1,6);
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}

	// ɾ������
	vec.pop_back();
	cout << "��β��ɾ������" << endl;
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}

	cout << "ָ��λ��ɾ������" << endl;
	vec.erase(vec.end()-1);
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}
    return 0;
}

