#include <stdio.h>
#include <stdlib.h>
#define QueueSize 100
typedef struct QueueElem {
	int data[QueueSize];
	int front;
	int rear;
}Queue;
//基本操作
int InitQueue(Queue* q);
int ClearQueue(Queue* q);
int QueueEmpty(Queue* q);
void GetHead(Queue* q, int* e);
int EnQueue(Queue* q, int e);
int DeQueue(Queue* q,int *e);
int QueueLength(Queue q);
int main(void)
{
	return 0;
}

int InitQueue(Queue* q)
{
	q->front = 0;
	q->rear = 0;
	return 1;
}
int ClearQueue(Queue* q)
{
	q->front = 0;
	q->rear = 0;
	return 1;
}
int QueueEmpty(Queue* q)
{
	if (q->front == q->rear)
		return 0;
	return 1;
}
void GetHead(Queue* q, int* e)
{
	*e = q->data[q->front];
}
int EnQueue(Queue* q, int e)
{
	if ((q->rear + 1) % QueueSize == q->front)
		return 0;
	q->data[q->rear] = e;
	q->rear = (q->rear + 1) % QueueSize;//调整rear的位置，使rear+1
	return 1;
}
int DeQueue(Queue* q,int *e)
{
	if ((q->rear + 1) % QueueSize == q->front)
		return 0;
	if (q->front < QueueSize)    //不判断会报警告，同时保证代码安全
		*e = q->data[q->front];
	else
		return 0;
	q->front = (q->front + 1) % QueueSize;
	return 1;
}
int QueueLength(Queue q)
{
	return (q.rear - q.front + QueueSize) % QueueSize;
}

