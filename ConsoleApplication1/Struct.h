#pragma once
#pragma once
#include <string>
#include <iostream>
using namespace std;//�����cpp��������h������string  ��������
enum VALUETYPE
{
	ZERO, STRUCT, CLASS, CLASS_VALUE, CLASS_FUCTION
};

struct MyStruct
{
	MyStruct* pMyStruct;
	int num;
	string name;
	char sex;
	float score;
	VALUETYPE s;

	//Ӧ�������־��
	MyStruct() {

		pMyStruct = NULL;
		num = 0;
		name = "";
		sex = 'm';
		score = 0.00;
		s = STRUCT;
	}
};

class test {
public:
	bool getType();//
	//bool setType(MyStruct s);//��ֵ
	//bool setType(MyStruct *s);//��ַ
	bool Fun1();
	bool setType(MyStruct &s);//������
};//����һ��struct����
//bool test::setType(MyStruct s)
//{
//
//	MyStruct st = s;
//
//	st.num = CLASS;
//
//
//	std::cout << "st.num:";
//	std::cout << st.num;
//	std::cout << "\n";
//
//	return true;
//}
//
//bool test::setType(MyStruct *s)//&st
//{
//	MyStruct st = *s;
//
//	st.num = CLASS;
//
//	std::cout << "��ָ��\n";
//	std::cout << "st.num:";
//	std::cout << st.num;
//	std::cout << "\n";
//	return true;
//}

