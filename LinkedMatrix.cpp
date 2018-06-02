#include <bits/stdc++.h>
#include "myqueue.h"
typedef long long ll;
#define NOEDGE 0

//邻接存储结构，有向图，a[i][j]!=0时，存储的是边(i,j)的权值
typedef struct MGraph
{
	int n;//顶点数量
	int e;//边的数量
	int **a;//邻接矩阵
}MGraph;

//创建包含mSize个节点的图
void CreateMGraph(MGraph *G,int mSize)
{
	G -> n = mSize;
	G -> e = 0;
	G -> a = (int **)malloc(sizeof(int*) * mSize);
	for(int i=0;i<mSize;i++){
		G -> a[i] = (int *)malloc(sizeof(int) * mSize);
		for(int j=0;j<mSize;j++)
			G -> a[i][j] = NOEDGE;
	}
}
int main() 
{
	
	return 0;
}