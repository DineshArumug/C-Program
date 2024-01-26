//Write a C program to find total number of alphabets, digits or special character in a string.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct character {
	char str1[50];
	int digit;
	int alphabet;
	int special;
};
struct character *count_string(struct character *);
int main(){
	struct character *string = (struct character *)malloc(2*sizeof(struct character *));
	printf("Enter the any string\n");
	scanf("%[^\n]",string->str1);
	struct character *result = count_string(string);
	printf("No.of alphabet = %d\nNo.of digits = %d\nNo.of special character = %d\n",result->alphabet,result->digit,result->special);
}
struct character *count_string(struct character *value)
{
	printf("Count string Fun \n");
	int i;
	value->digit = value->alphabet = value->special = 0;
//	value = (struct character *)malloc(2*sizeof(struct character*));
	for(i=0;value->str1[i];i++)
	{
		if((value->str1[i] >= '1')&&(value->str1[i] <= '9')){
			value->digit++;}
		else if(((value->str1[i] >= 'a')&&(value->str1[i] <= 'z'))||((value->str1[i] >= 'A')&&(value->str1[i] <= 'Z'))){
			value->alphabet++;}
		else 
			value->special++;
	}
	return value;
}
