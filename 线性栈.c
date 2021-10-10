#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100
typedef struct  {
	int data[MAXSIZE];
	int top;
}SqStack;
void InitStack(SqStack* S);
void DestoryStack(SqStack* S);
void ClearStack(SqStack* S);
int StackEmpty(SqStack* S);
int GetTop(SqStack* S);
int Push(SqStack* S, int e);
int Pop(SqStack* S,int *e);
int StackLength(SqStack* S);
int main(void)
{
	return 0;
}

void InitStack(SqStack* S)   //初始化
{
	S = (SqStack*)malloc(sizeof(SqStack));
	if (S)
	{
		S->data[0] = 0;
		S->top = -1;
	}
}
void DestoryStack(SqStack* S)  //销毁栈
{
	if (StackEmpty(S))
	{
		free(S);
		S = NULL;
	}
}
void ClearStack(SqStack* S)    //清空栈
{
	if (StackEmpty)
	{
		printf("无此栈");
		return;
	}
	if (S->top == -1) return;
	int num = StackLength(S);
	while(num)
	{
		S->data[S->top] = 0;
		S->top--;
		num--;
	}
}
int StackEmpty(SqStack* S) { //判断是否为空栈
	if (S)
		return 1;
	else return 0;
}
int GetTop(SqStack* S)   //得到top元素
{
	return S->data[S->top];
}
int Push(SqStack* S, int e)   //放入元素
{
	if (S->top == MAXSIZE - 1)
	{
		printf("栈已满");
		return 0;
	}
	S->top++;
	S->data[S->top] = e;
	return 1;
}
int Pop(SqStack* S, int* e)     //删除元素
{
	if (S->top == -1)
	{
		printf("栈为空栈");
			return 0;
	}
	*e = S->data[S->top];
	S->top--;
	return 1;
}
int StackLength(SqStack* S)   //得到长度
{
	return (S->top) + 1;
}


