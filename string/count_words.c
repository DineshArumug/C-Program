//Write a C program to count total number of words in a string.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct count_words{
	int count;
	char str[50];
};
struct count_words *count_no_of_words(struct count_words*);
int main(){
	struct count_words *real = (struct count_words *)malloc(2*sizeof(struct count_words*));
	printf("Enter the any string line for count total number of words\n"),scanf("%[^\n]",real->str);
	struct count_words *result = (struct count_words*)malloc(2*sizeof(struct count_words*));
	result = count_no_of_words(real);
	printf("\nNo.of words in string = %d\n",result->count);
//	free(real);
}
struct count_words *count_no_of_words(struct count_words *value)
{
	printf("**********Fun : count_no_of_words**********\n");
	value->count = 1;
	int i;
	for(i=0;value->str[i];i++)
	{
		if(value->str[i] == ' ')
		{
			value->count++;
			printf("%c-",value->str[i]);
		}
	}
	return value;
}
