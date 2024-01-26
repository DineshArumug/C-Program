//Write a C program to concatenate two strings using pointers.
#include<stdio.h>
#include<string.h>
int i;
void string_cat(char *ptr1,char *ptr2);
int main()
{
	char string1[100],string2[100];
	printf("Enter the any string\n");
	scanf(" %[^\n]",string1);
	scanf(" %[^\n]",string2);
	for(i=0;string1[i];i++);
	//strncat(string2,string1,i-1);
	string_cat(string1,string2);
	printf("String_concatenate = %s",string1);
}
void string_cat(char *ptr1,char *ptr2)
{
	int j,count;
	for(count =0;ptr2[count];count++);
	for(j=0;ptr2[j];i++,j++)
	{
		ptr1[i] = ptr2[j];
	}
}
