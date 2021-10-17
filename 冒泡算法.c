#include <stdio.h>
#define MAXSIZE 10 
//冒泡排序   时间复杂度O(n^2) 
typedef struct 
{
	int r[MAXSIZE+1] ;
	int length;
}SqList;
void swap(SqList *L,int i,int j);
void BubbleSort(SqList *L);
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
void BubbleSort(SqList *L)
{
	int i,j;
	for(i = 1;i<L->length;i++){
		for (j = L->length-1;j>=i;j--)
			if(L->r[j]>L->r[j+1])
			{
				swap(L,j,j+1);  //向前交换 
			}
	}
}
