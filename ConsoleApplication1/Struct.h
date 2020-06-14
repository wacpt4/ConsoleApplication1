#pragma once
#pragma once
#include <string>
#include <iostream>
using namespace std;//如果在cpp里面括而h里面有string  报错不明显
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

	//应该输入标志符
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
	//bool setType(MyStruct s);//传值
	//bool setType(MyStruct *s);//传址
	bool Fun1();
	bool setType(MyStruct &s);//传引用
};//传入一个struct对象
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
//	std::cout << "传指针\n";
//	std::cout << "st.num:";
//	std::cout << st.num;
//	std::cout << "\n";
//	return true;
//}

