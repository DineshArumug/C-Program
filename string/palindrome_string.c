//Write a C program to check whether a string is palindrome or not.
#include"header.h"
#define String_length(str) strlen(str)
typedef struct palindrome
{
	char str1[50];
	int check;
}SP;
SP *palindrome_string(SP *);
int main()
{
	SP *real = (SP *)malloc(sizeof(SP));
	printf("Enter the any string for checking the palindrome or not\n");
	scanf("%[^\n]",real->str1);
	SP *result = (SP *)malloc(sizeof(SP));
	result = palindrome_string(real);
	if(result->check == 0)
		printf("String is palindrome\n");
	else
		printf("String is not a palindrome\n");
}
SP *palindrome_string(SP *value)
{
	int i,j;
	value->check = 0;
	printf("String size = %ld\n",String_length(value->str1));
	for(i = zero,j = String_length(value->str1)-1;i<j;i++,j--)
	{
		if(value->str1[i]==value->str1[j])
			continue;
		else
			value->check = 1;
	}
	return value;
}

