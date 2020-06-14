#pragma once
//https://blog.csdn.net/lanchunhui/article/details/49634077
//模板不支持分离编译。你需要把所有的申明和定义放在一个文件里实现

//   搜索算法：find() 、search() 、count() 、find_if() 、search_if() 、count_if() 
//分类排序：sort()、merge()
//删除算法：unique() 、remove()
//生成和变异：generate() 、fill() 、transformation() 、copy()
//关系算法：equal() 、min() 、max()
//————————————————
//版权声明：本文为CSDN博主「攻城狮凌风」的原创文章，遵循CC 4.0 BY - SA版权协议，转载请附上原文出处链接及本声明。
//原文链接：https ://blog.csdn.net/qianhen123/article/details/39204131


template<typename T, int MAXSIZE>
class Stack
{
public:
	Stack() :idx(0) {}
	bool empty() const { return idx == 0; }
	bool full() const { return idx == MAXSIZE; }
	void push(const T&);
	void pop();
	T& top();
	const T& top() const;

	
	//下面网址指导如何编写类成员函数  可做模板类编写练习 对照empty和full×  对照void push×
	//https://blog.csdn.net/aflyeaglenku/article/details/81453245
	//template<typename T> bool do(T temp);

	//template<typename T> void A1(T temp);
	//
private:
	int idx;
	T elems[MAXSIZE];
};

//template<typename T, int MAXSIZE>
//void Stack::A1(T temp)
//{
//	cout << "类模板成员函数:" << temp << endl;
//}


template<typename T, int MAXSIZE>
void Stack<T, MAXSIZE>::push(const T& elem)
{
	if (full())
		throw std::out_of_range("Stack<>::push(): full stack");
	elems[idx++] = elem;
}

template<typename T, int MAXSIZE>
void Stack<T, MAXSIZE>::pop()
{
	if (!empty())
		idx--;
	else
		throw std::out_of_range("Stack<>::pop(): empty stack")
}

template<typename T, int MAXSIZE>
T& Stack<T, MAXSIZE>::top()
{
	if (empty())
		throw std::out_of_range("Stack<>::top(): empty stack");
	return elems[idx - 1];
}

template<typename T, int MAXSIZE>
const T& Stack<T, MAXSIZE>::top() const
{
	if (empty())
		throw std::out_of_range("Stack<>::top(): empty stack");
	return elems[idx - 1];
}

