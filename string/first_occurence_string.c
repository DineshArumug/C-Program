//Write a C program to find first occurrence of a character in a given string
#include"header.h"
typedef struct find_string
{
	char check;
	char str[100];
	int count;
}FS;
FS *first_occurrence(FS *);
int main()
{
	FS *real = (FS *)malloc(sizeof(FS));
	printf("Enter the any string for find first occurrence of a character\n");
	scanf("%[^\n]",real->str);
	printf("Enter the character is present in the string\n");
	scanf(" %c",&real->check);
	FS *result = (FS *)malloc(sizeof(FS));
	result = first_occurrence(real);
	if(result->count){
		printf("String is present in %c character at location %d index\n",result->check,result->count+1);
		return 0;
	}
	printf("String is not present in %c character \n",result->check);
}
FS *first_occurrence(FS *value){
	int i;
	value->count = 0;
//	printf("\n %s \n",value->check);
	for(i=0;value->str[i];i++)
	{
		if(value->str[i] == value->check)
			break;
		else{
	//		printf("%d ",value->count);
			value->count++;
		}
	}
	return value;
}
