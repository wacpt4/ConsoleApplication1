#pragma once
//ͼ��
//���㼯
struct Edge
{

};
//�߼� ����Ϊ�� ��Ҫ��n��
struct Vertex 
{

};

//����ͼ�Ĵ洢����������
	//����ʮ������
	//�����ڽӶ��ر�
	//�����ڽӾ���//һ��һά����洢���㣬һ����ά����洢ͼ�бߵ���Ϣ
	//�����ڽӱ�
#define MAXNUM 100;
typedef char cVer;
typedef int  iEdge;

typedef struct {
	cVer	Vex[MAXNUM];
	iEdge	iEdge[MAXNUM][MAXNUM];
	int VexNum;
	int EdgeNum;
}MGraph;




//������Ϊ��ͼ û��ֻ�ж���û�бߵ�ͼ ����Ľṹ������ǿ�
class CDraw//����ͼ
{
public:

private:
	Edge   m_edgeArr;
	Vertex m_vertexArr;
	
};



//����ͼ
//����ͼ�Ļ�������
//������������
//��  ���������������
//��  ���������������
//����ͼ�Ļ���Ӧ��
//��  �����ؼ�·��
//��  ������������
//��  ��  ����AOE��
//��  ��  ����AOV��
//��  ������С������
//��  ��  ����Kruskal�㷨
//��  ��  ����Prim�㷨
//��  �������·��
//��      ����Dijkstra�㷨
//��      ����Floyd�㷨
//����ͼ�Ĵ洢����������
	//����ʮ������
	//�����ڽӶ��ر�
	//�����ڽӾ���//һ��һά����洢���㣬һ����ά����洢ͼ�бߵ���Ϣ
	//�����ڽӱ�

//����4��
//
//ʹ��typedef����ṹ��ͬʱ����stu�ṹ�����STU����������ɲ���ʹ��struct stu��ֱ��ʹ��STU���ɡ�
//typedef struct stu
//{
//	char  aa;
//	short bb;
//	int   cc;
//}STU;
//STU stu1;
//
//��ᷢ�֣���ʵ����ͨ���ؼ���typedef����STUȡ����struct stu��
//��Ȼ��Ҳ������ô�ã�
//struct stu stu1;
//�������ֶ����ʧȥ��typedef����˼�����Բ��Ƽ���

