//Write a C program to compare two strings. 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct compare
{
	char str1[20];
	char str2[20];
};
int fun_compare_string(struct compare);
int main()
{
	struct compare compare_string;// = (struct compare)malloc(2*sizeof(struct compare));
	printf("Enter the two string for compare \n");
	scanf("%s%s",compare_string.str1,compare_string.str2);
	int count = fun_compare_string(compare_string);
	if(count == 0)
		printf("Both string are same\n");
	else
		printf("Both string are not same \n");
}
int fun_compare_string(struct compare compare_string)
{
//	compare = (struct com) malloc(5*sizeof(struct com));
	int i = 0,count = 0;
	for(i=0;compare_string.str1[i]||compare_string.str2[i];i++){
	if(compare_string.str1[i]!=compare_string.str2[i])
		count++;
	}
	return count;
}

