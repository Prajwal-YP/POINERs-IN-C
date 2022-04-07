/*
	Program Name	:	strfuncptr.c
	Author			:	Prajwal Y P
	Task			:	To display and read string using pointer function .
*/

#include <stdio.h>

int main()
{
	char s[100];
	
	read(s);	//POINTER FUNCTION TO READ STRING INPUT
	
	disp(s);	//POINTER FUNCTION TO DISPLAY STRING
	
	printf("\n\n---------------------------------------------------------\n\n");
}

read(char *p)
{
	printf("Enter string  :  ");
	//gets(p);
	scanf("%[^\n]",p);	//READ STRING PROCESS
}

disp(char *p)
{
	int i;
	printf("\nString  :  ");
	for(i=0;*(p+i)!='\0';i++)
		putchar(*(p+i));	//DISPLAY STRING PROCESS
}
