#include <stdio.h>
#include <stdlib.h>
//基本操作和链表相同
typedef struct StackNode {
	int data;
	struct StackNode* next;
}StackNode,*LinkStackPtr;   //栈

typedef struct LinkStack {  //栈顶指针
	LinkStackPtr top;//栈顶
	int count;       //计数
}LickStack;
int main(void)
{
	return 0;
}

int Push(LickStack *S, int e)  //入栈
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


int Pop(LickStack* S,int* e)//出栈
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

int StackEmpty(LinkStackPtr* S) { //判断是否为空栈
	if (S)
		return 1;
	else return 0;
}