//头文件放置习惯：头文件放在cpp,哪里使用的头文件就放哪里,然后跑不通就去上一层级
//注释习惯：领导用REVIEW标注更新的内容；TODO的话看自己习惯，我会觉得太广泛所以用UP记录自己要优化的内容；业务注释
//做菜单目录的时候我用Cmd的Tree命令搞了一下
//├─cmd1
//│  └─main
//│      └─funVector.cpp//vector相关
//常用的0，1，2，3计数做成枚举代替，比如说列表控件的第n列
#include <iostream>
#include <string>//那么这样放，别的类也要用的话会不会重复包含

#include "main.h"//放置一些头文件
#include "funVector.h"
#include "Vector.h"

using namespace std;

int main()
{
	try
	{
		Stack<int, 10> int10Stack;
		Stack<int, 20> int20Stack;
		int10Stack.push(7);
		int20Stack.push(7);
	}
	catch (std::exception& ex)
	{
		cout << ex.what() << endl;
		return EXIT_FAILURE;
	}

   system("pause");
}
