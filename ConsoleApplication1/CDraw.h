#pragma once
//图类
//顶点集
struct Edge
{

};
//边集 个数为阶 主要是n阶
struct Vertex 
{

};

//└─图的存储及基本操作
	//├─十字链表
	//├─邻接多重表
	//├─邻接矩阵法//一个一维数组存储顶点，一个二维数组存储图中边的信息
	//└─邻接表法
#define MAXNUM 100;
typedef char cVer;
typedef int  iEdge;

typedef struct {
	cVer	Vex[MAXNUM];
	iEdge	iEdge[MAXNUM][MAXNUM];
	int VexNum;
	int EdgeNum;
}MGraph;




//不可以为空图 没有只有顶点没有边的图 其余的结构体可以是空
class CDraw//无向图
{
public:

private:
	Edge   m_edgeArr;
	Vertex m_vertexArr;
	
};



//└─图
//├─图的基本概念
//├─优先搜索
//│  ├─广度优先收缩
//│  └─深度优先搜索
//├─图的基本应用
//│  ├─关键路径
//│  ├─拓扑排序
//│  │  ├─AOE网
//│  │  └─AOV网
//│  ├─最小生成树
//│  │  ├─Kruskal算法
//│  │  └─Prim算法
//│  └─最短路径
//│      ├─Dijkstra算法
//│      └─Floyd算法
//└─图的存储及基本操作
	//├─十字链表
	//├─邻接多重表
	//├─邻接矩阵法//一个一维数组存储顶点，一个二维数组存储图中边的信息
	//└─邻接表法

//方法4：
//
//使用typedef定义结构体同时，给stu结构体别名STU，后续定义可不用使用struct stu，直接使用STU即可。
//typedef struct stu
//{
//	char  aa;
//	short bb;
//	int   cc;
//}STU;
//STU stu1;
//
//你会发现，其实就是通过关键字typedef，将STU取代了struct stu。
//当然，也可以这么用：
//struct stu stu1;
//上面这种定义就失去了typedef的意思，所以不推荐。

