//Write a C program to find length of a string.
#include<stdio.h>
int lenght_string(char *);
int main()
{
	char str[50];
	printf("Enter the any string\n"),scanf("%s",str);
	int (*fp)(char *);
       	fp = lenght_string;
	int lenght = fp(str);
	printf("String lenght = %d\n",lenght);	
}
int lenght_string(char *ptr){
	int i;
	for(i=0;ptr[i];i++);
	return i;
}
