#include <stdio.h>
char x[210];
void f(char x[],int last);
void h(char a[],int last);

int main(int argc, char* argv[])
{	
	int n,i,Last,num;
	scanf("%d",&n);
	Last = 2*n;
	x[Last+1] = x[Last+2] = '-';
	for(i=1;i<=n;i++) {
		x[i]='o';
		printf("%c",x[i]);
		}
	for (;i<=2*n;i++){
		x[i]='*';
		printf("%c",x[i]);	
		}
	for (int t= Last+1;t<=Last+2;t++) printf("%c",x[t]);
	printf("\n");
	while(x[4] != '-'){
		f(x,Last);
		for (num =1;num<=2*n+2;num++)printf("%c",x[num]);
		printf("\n");
		if(x[4]=='-')break;	
		h(x,Last); 
		for (num =1;num<=2*n+2;num++)printf("%c",x[num]);
		Last=Last-2;
		printf("\n");
	}
	printf("ooo*o**--");
	for (num =10;num<=2*n+2;num++)printf("%c",x[num]);
	printf("\n");
	printf("o--*o**oo");
	for (num =10;num<=2*n+2;num++)printf("%c",x[num]);
	printf("\n");
	printf("o*o*o*--o");
	for (num =10;num<=2*n+2;num++)printf("%c",x[num]);
	printf("\n");
	printf("--o*o*o*o");
	for (num =10;num<=2*n+2;num++)printf("%c",x[num]);
	return 0;
}
void f(char x[],int last)
{
	int mid = last/2;
	if (x[2]=='-')  {
		x[1]='-';
		x[3]='o';
		return;
	}
	x[mid] = x[mid+1] = '-';
	x[last+1]='o';
	x[last+2] = '*';
}

void h(char a[],int last)
{	
	int mid = last/2;
	x[mid] = '*';
	x[mid+1] = '*';
	x[last] = x[last-1] = '-';
}

