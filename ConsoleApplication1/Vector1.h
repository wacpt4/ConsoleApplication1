#pragma once

#include <iostream>
using namespace std;
class A
{
public:
	template<typename T> void A1(T temp);
	template<typename T> A(T temp);
};

template<typename T>
A::A(T temp)
{
	cout << "类模板构造函数:" << temp << endl;
}

template<typename T>
void A::A1(T temp)
{
	cout << "类模板成员函数:" << temp << endl;
}

template <typename T>
void test(T temp)
{
	cout << temp << endl;
}
void test_template_constructor()
{
	test<int>(12); //普通模板函数
	A aa(12); //请注意这一行
	aa.A1<int>(15); //成员函数是模板函数

}