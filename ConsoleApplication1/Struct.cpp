#include "Struct.h"
bool test::getType()
{
	//if ()
	//{
	//	return false;
	//}
	return true;
}
bool test::Fun1()
{
	MyStruct st;

	std::cout << "Hello World!\n";

	std::cout << "st.pMyStruct:";
	std::cout << st.pMyStruct;
	std::cout << "\n";
	std::cout << "st.num:";
	std::cout << st.num;
	std::cout << "\n";
	std::cout << "st.sex:";
	std::cout << st.sex;
	std::cout << "\n";
	std::cout << "st.score:";
	std::cout << st.score;

	std::cout << "st.s:";
	std::cout << st.s;
	std::cout << "\n";

	std::cout << "�޸ĺ�:";
	test t;
	//std::cout << "��ֵ\n";
	//t.setType(st);
	std::cout << "\n";
	//std::cout << "��ַ\n";
	//t.setType(*st);
	//std::cout << "\n";

	//�ı����
	t.setType(st);
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "����Ƿ�ı�\n";
	std::cout << "st.num:";
	std::cout << st.num;
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";
	return true;
}

bool test::setType(MyStruct &s)
{
	MyStruct &st = s;//��������ַ���������õ�ַ����

	st.num = CLASS;

	std::cout << "������\n";
	std::cout << "st.num:";
	std::cout << st.num;
	std::cout << "\n";
	return true;
}
