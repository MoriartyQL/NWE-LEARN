#pragma once
typedef struct _List {
	int data;
	struct _List* next;
}List;
typedef struct Plist {
	List* head;
	List* last;
}plist;
void InitList(plist *Head,int number);



