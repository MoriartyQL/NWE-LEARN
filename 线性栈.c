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

void InitStack(SqStack* S)   //��ʼ��
{
	S = (SqStack*)malloc(sizeof(SqStack));
	if (S)
	{
		S->data[0] = 0;
		S->top = -1;
	}
}
void DestoryStack(SqStack* S)  //����ջ
{
	if (StackEmpty(S))
	{
		free(S);
		S = NULL;
	}
}
void ClearStack(SqStack* S)    //���ջ
{
	if (StackEmpty)
	{
		printf("�޴�ջ");
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
int StackEmpty(SqStack* S) { //�ж��Ƿ�Ϊ��ջ
	if (S)
		return 1;
	else return 0;
}
int GetTop(SqStack* S)   //�õ�topԪ��
{
	return S->data[S->top];
}
int Push(SqStack* S, int e)   //����Ԫ��
{
	if (S->top == MAXSIZE - 1)
	{
		printf("ջ����");
		return 0;
	}
	S->top++;
	S->data[S->top] = e;
	return 1;
}
int Pop(SqStack* S, int* e)     //ɾ��Ԫ��
{
	if (S->top == -1)
	{
		printf("ջΪ��ջ");
			return 0;
	}
	*e = S->data[S->top];
	S->top--;
	return 1;
}
int StackLength(SqStack* S)   //�õ�����
{
	return (S->top) + 1;
}


