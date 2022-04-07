/*
	Program Name	:	sizeptr.c
	Author			:	Prajwal Y P
	Task			:	To display size of Pointer .
*/

#include <stdio.h>

int main()
{
	int a=10,*pi;
	char b='b',*pc;
	float c=10.9,*pf;
	double d=12.56,*pd;
	
	printf("\nSize of pi  : %d",sizeof(pi));
	printf("\nSize of pc  : %d",sizeof(pc));
	printf("\nSize of pf  : %d",sizeof(pf));
	printf("\nSize of pd  : %d",sizeof(pd));
	
	printf("\nSize of a (int) : %d",sizeof(a));
	printf("\nSize of b (char) : %d",sizeof(b));
	printf("\nSize of c (float) : %d",sizeof(c));
	printf("\nSize of d (double) : %d",sizeof(d));
	
	printf("\n\n---------------------------------------------------------\n\n");
}



