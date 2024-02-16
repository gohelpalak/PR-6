//Q.1 Write a Program to check whether a string is a palindrome or not without using string functions.
#include<stdio.h>
void main()
{
	char name[100],temp[100];
	printf("Enter String = ");
	gets(name);
	
	strcpy(temp,name);
	printf("Reverse string = %s\n",strrev(temp));
	if(strcmp(name,temp)==0)
	{
		printf("string is palindrom");
	}
	else
	{
		printf("string is not palindrom");
	}
}