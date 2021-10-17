#include <stdio.h>
#define MAXSIZE 10 
//直接插入排序   时间复杂度O(N^2) 性能好于冒泡，简单 
typedef struct 
{
	int r[MAXSIZE+1];
	int length;
}SqList;
void swap(SqList *L,int i,int j);
void InsertSort(SqList *L);
int main(void)
{	
	return 0;
}
 
void swap(SqList *L,int i,int j)
{
	int temp = L->r[i];
	L->r[i] = L->r[j];
	L->r[j] = temp; 
}
void InsertSort(SqList *L)
{
	int i,j;
	for(i = 2;i<=L->length;i++)
	{
		if(L->r[i]<L->r[i-1])
		{
			L->r[0] = L->r[i];
			for(j = i-1;L->r[j]>L->r[0];j--)
				L->r[j+1] = L->r[j];   //将在j前比他的数字后移 
			L->r[j+1] = L->r[0];          
			//将数字插入到对应位置。前小后大    循环中j-1了，所以要到对应位置应该+1 
		}
	}
 } 
