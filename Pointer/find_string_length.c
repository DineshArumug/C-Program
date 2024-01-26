//Write a C program to find length of string using pointers.
#include<stdio.h>
void find_string_length(char *);
int main()
{
	char str[100];
	printf("Enter the string\n");
	scanf(" %[^\n]",str);
	void (*fp)(char *) = find_string_length;
	fp(str);
}
void find_string_length(char *ptr){
	int i,count=0;
	for(i=0;ptr[i];i++)
		count++;
	printf("The Length of the string '%s'  = %d",ptr,count);
}
