// 001_c++_hello.cpp: �������̨Ӧ�ó������ڵ㡣
//��ס ctrl+f5����

#include "stdafx.h"

class Trace {
public:
	void print(const char* s) {
		printf("%s\n", s);
	};
};

int main()
{
	printf("%s\n", "hello C");
	Trace t;
	t.print("hello C++");
	return 0;
}