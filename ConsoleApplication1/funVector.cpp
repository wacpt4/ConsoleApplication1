#include <iostream>
using namespace std;

#include "funVector.h"
#include "vector"
#include "Struct.h"
int funVector::iFun1()
{

	int a[4] = { 1,2,3,4 };
	// 	vector<MyStruct> MyStructArr;
	// 	MyStruct u1,u2,u3,u4;
	// 	MyStructArr.push_back(u1);
	// 	MyStructArr.push_back(u2);
	// 	MyStructArr.push_back(u3);
	// 	MyStructArr.push_back(u4);
	// 	a + 1, a + 5;
	vector<int> intArr;
	intArr.push_back(1);
	intArr.push_back(2);
	intArr.push_back(3);
	intArr.push_back(4);
	// 	vector<int> b (a, a + 4);
	// 	for (int i = 0; i <= b.size() - 1; ++i) 
	// 	{ 
	// 		cout << b[i] << endl; 
	// 	}
		//�Ƚ���Ҫ�ķ���
	// 	intArr.begin();
	// 	intArr.end();
	// 	intArr.size();


	// 	vector<int>::iterator it;
	// 	for (it = intArr.begin();it != intArr.end(); it++)
	// 	{
	// 		cout << intArr[*it];
	// 	}
		////C++11 ����
		//for (auto val: intArr)
		//{
		//	cout << intArr[val];
		//}

		//C++11 ������ֵ
		//����val-1�����234 
		//vector��valҲ������ָ����
	for (auto &i : intArr)
	{
		i += 1;
		/*intArr[val] +=  1;*/
	}

	for (auto &i : intArr)
	{
		std::cout << intArr[i] << endl;
	}




	//for (auto val : intArr)
	//{
	//	cout << intArr[val];
	//}
// 	int a[6] = { 1,2,3,4,5,6 };
// 	vector<int>b(a, a + 4);
// 	for (vector<int>::iterator it = b.begin(); it != b.end(); it++) 
// 	{ cout << *it << "  "; }
	return 0;
}

int funVector::iFUn2()
{
	vector<int> ivec;
	for (int i = 0; i < 10; ++i)
		ivec.push_back(i);

	//����vectorԪ��
	//1: ���õ�����
	for (auto it = ivec.begin(); it != ivec.end(); ++it)
		cout << *it << " ";
	cout << endl;
	//2: �����±������
	for (auto i = 0; i < ivec.size(); ++i)
		cout << ivec[i] << " ";
	cout << endl;
	//3: ���÷�Χforѭ��
	for (auto i : ivec)
		cout << i << " ";
	cout << endl << endl;


	//�޸�vector�е�Ԫ�أ�ǰ��������vector������Ԫ�أ������·�ʽ�����ܸı�����Ԫ�صĸ�����
	//1: ���õ�����
	for (auto it = ivec.begin(); it != ivec.end(); ++it)
	{
		*it = *it * 2;
		cout << *it << " ";
	}
	cout << endl;
	//2: �����±������
	for (auto i = 0; i < ivec.size(); ++i)
	{
		ivec[i] = ivec[i] * 2;
		cout << ivec[i] << " ";
	}
	cout << endl;
	//3: ���÷�Χforѭ��
	for (auto &i : ivec)//ע��˴�������
	{
		i = i * 2;
		cout << i << " ";
	}
	cout << endl;

	return 0;
}

int funVector::iFun3()
{
	vector<string> root;//����һ���㷨
	root.push_back("a");
	// 	root.push_back("b");
	// 	root.push_back("c");

	vector<string> treeNode;
	vector<vector<string>> tree;
	treeNode.push_back("aa");
	treeNode.push_back("aaa");
	treeNode.push_back("aaaa");


	tree[0].resize(root.size());

	tree.push_back(vector<string>());
	tree.push_back(vector<string>());
	tree.push_back(vector<string>());


	vector<int> vec;
	vec.push_back(1);
	vec[0];

	for (int &i : vec)
	{
		vec[i - 1] = vec[i - 1] + 1;
		cout << vec[i - 1] << endl;
	}
	//for (auto i : vec)
	//{
	//	
	//	cout << i << endl;
	//	
	//}

	string *ps;



	treeNode.clear();
	root.clear();
	tree.clear();
	return 0;
}

int funVector::iFun4()
{

	test t1;
	t1.Fun1();
	return 0;
}
