//Write a C program to find reverse of a string using pointers.
#include<stdio.h>
void reverse_string(char *ptr);
int main(){
	char string1[100];
	printf("Enter the string\n");
	scanf(" %[^\n]",string1);
	reverse_string(string1);
	printf("Reverse string = %s",string1);
}
void reverse_string(char *ptr){
	int i,j;
	char temp;
	for(i=0;ptr[i];i++);
	for(j=0,i--;j<i;j++,i--)
	{
		temp = ptr[i];
		ptr[i] = ptr[j];
		ptr[j] = temp;

	}
}
