#include <stdio.h>
#include <stdlib.h>
//����������������ͬ
typedef struct StackNode {
	int data;
	struct StackNode* next;
}StackNode,*LinkStackPtr;   //ջ

typedef struct LinkStack {  //ջ��ָ��
	LinkStackPtr top;//ջ��
	int count;       //����
}LickStack;
int main(void)
{
	return 0;
}

int Push(LickStack *S, int e)  //��ջ
{
	LinkStackPtr new = (LinkStackPtr*)malloc(sizeof(LinkStackPtr));
	if (new)
	{
		new->data = e;
		new->next = S->top;   
		S->top = new;
		S->count++;
		return 1;
	}
	else return 0;
}


int Pop(LickStack* S,int* e)//��ջ
{
	LinkStackPtr p;
	if (StackEmpty(S))
		return 0;
	*e = S->top->data;
	p = S->top;
	S->top = S->top->next;
	free(p);
	S->count--;
	return 1;
}

int StackEmpty(LinkStackPtr* S) { //�ж��Ƿ�Ϊ��ջ
	if (S)
		return 1;
	else return 0;
}