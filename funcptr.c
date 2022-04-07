/*
	Program Name	:	funcptr.c
	Author			:	Prajwal Y P
	Task			:	To display SUM of array using sum() pointer function .
*/

#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int a[10];
	
	read(a);	//POINTER FUNCTION TO WRITE RANDOM NUMBERS IN ARRAY .
	
	disp(a);	//POINTER FUNCTION TO READ THE ARRAY ELEMENTS .
	
	sum(a);		//POINTER FUNCTION TO CALCULATE THE SUM OF ALL ARRAY ELEMENTS .
	
	printf("\n\n---------------------------------------------------------\n\n");
}

read(int *p)
{
	int i;
	srand(time(0));
	
	for(i=0;i<10;i++)
	{
		*(p+i)=rand()%10+1;	//WRITING ELEMENTS TO ARRAY
	}
}

disp(int *p)
{
	int i;
	for(i=0;i<10;i++)
		printf("\n\t%d (%d)  :  %d",i,p+i,*(p+i));	//READING ARRAY ELEMENTS
}

sum(int *p)
{
	int i,sum=0\;
	for(i=0;i<10;i++)
	{
		sum+=*(p+i);
	}
	printf("\n\n\t\tSum of all Array-Elements : %d",sum);	//SUM  OF ARRAY ELEMENTS
}
