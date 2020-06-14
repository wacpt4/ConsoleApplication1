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

	std::cout << "修改后:";
	test t;
	//std::cout << "传值\n";
	//t.setType(st);
	std::cout << "\n";
	//std::cout << "传址\n";
	//t.setType(*st);
	//std::cout << "\n";

	//改变参数
	t.setType(st);
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "检测是否改变\n";
	std::cout << "st.num:";
	std::cout << st.num;
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";
	return true;
}

bool test::setType(MyStruct &s)
{
	MyStruct &st = s;//参数传地址，函数内用地址接受

	st.num = CLASS;

	std::cout << "传引用\n";
	std::cout << "st.num:";
	std::cout << st.num;
	std::cout << "\n";
	return true;
}
