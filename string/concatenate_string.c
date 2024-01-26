//Write a C program to concatenate two strings.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char *str1 = (char *) malloc(20 * sizeof(char));
	char *str2 = (char *) malloc(20 * sizeof(char));
	printf("Enter the two string for concatenate\n"),scanf("%s%s",str1,str2);
	int i,j;
	for(j=0;str1[j];j++);
	for(i=0;str2[i];i++,j++){
		str1[j]=str2[i];
	}
	printf("Concatenate = %s\n",str1);
//	printf("String concatenate = %s\n",strcat(str1,str2));
}
