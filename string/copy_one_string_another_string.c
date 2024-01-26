//Write a C program to copy one string to another string.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char *str1 = (char *)malloc(20*sizeof(char));
	char *str2 = (char *)malloc(20*sizeof(char));
	printf("Enter the string\n");
	scanf("%s",str1);
	printf("String1 = %s\n",str1);
	printf("Lenght of string = %s\n",strcpy(str2,str1));
	int i;
	for(i=0;str1[i];i++)
		str2[i] = str1[i];
	printf("String2 = %s\n",str2);
	


}
