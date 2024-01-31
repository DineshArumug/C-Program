//Write a C program to find first occurrence of a word in a given string.
#include"header.h"
#define StringLenght(str) strlen(str)

typedef struct word_occurerence
{
	char str[100];
	char word[20];
	int count;
	bool boolean;
}WO;
WO *first_occurrence_word(WO *value)
{
	printf("******Function : First_Occurrence_Word***********\n");
	int i,j,k;
	value->boolean = false;
	for(i=zero;value->str[i];i++)
	{
		value->count = 0;
		if(value->str[i] == value->word[0])
		{
			for(j=i,k=zero;value->word[k];k++,j++)
			{
				if(value->str[j] == value->word[k])
				{
					value->count++;
				}
			}
			if(value->count == StringLenght(value->word)){
				value->boolean = true;
				value->count = i+1;
				return value;
			}
		}
	}
	return value;
}
int main()
{
	WO *real = (WO *)malloc(sizeof(WO));
	printf("Enter the any string line\n");
	scanf("%[^\n]",real->str);
	printf("Enter the any string for first occurrence\n");
	scanf("%s",real->word);
WO *result = (WO *)malloc(sizeof(WO));
result = first_occurrence_word(real);
if(result->boolean)
{
	printf("String is present %s in -> %d index\n",result->word,result->count);
}
else
{
	printf("String is not found in a string line\n");
}
}

