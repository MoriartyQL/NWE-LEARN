#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int main(void)
{
	int number;
	plist Head;
	Head.head = Head.last = NULL;
	
	do{
		scanf_s("%d", &number);
		if (number != -1) {
			if (!Head.head)
			{
				InitList(&Head, number);
				Head.head = Head.last;
			}
			InitList(&Head, number);
		}
		
	} while (number != -1);
	return 0;
}


 void InitList(plist *Head,int number)
{
	List* p = (List*)malloc(sizeof(List));
	if (p) {  //��ֹ�ڴ�ռ䲻��
		p->data = number;
		p->next = NULL;
	}
	else
	{
		printf("�ڴ�ռ䲻��");
			return;
	}
	Head->last = p;
}