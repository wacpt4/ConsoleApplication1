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
	cout << "��ģ�幹�캯��:" << temp << endl;
}

template<typename T>
void A::A1(T temp)
{
	cout << "��ģ���Ա����:" << temp << endl;
}

template <typename T>
void test(T temp)
{
	cout << temp << endl;
}
void test_template_constructor()
{
	test<int>(12); //��ͨģ�庯��
	A aa(12); //��ע����һ��
	aa.A1<int>(15); //��Ա������ģ�庯��

}