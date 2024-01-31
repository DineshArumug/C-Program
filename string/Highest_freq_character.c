//Write a C program to find highest frequency character in a string.
#include"header.h"
#define StringLength(str) styrlen(str)

typedef struct high_freq{
	char str[100];
	char name;
	int count;
	int big;
}HF;
HF *Highest_Freq_char(HF *value)
{
	int i,j,k;
	value->big = 0;
	for(i=zero;value->str[i];i++)
	{
		value->count = 0;
		for(j=zero;value->str[j];j++)
		{
			if(value->str[i] == value->str[j])
				break;
		}
		if(i==j)
		{
			for(k=zero;value->str[k];k++)
			{
				if(value->str[i] == value->str[k])
				{
					value->count++;
					if(value->big<value->count)
					{
						value->big = value->count;
						value->name = value->str[i];
					}
				}
			}
		}
	}
	return value;
}
int main()
{
	HF *real = (HF *)malloc(sizeof(HF));
	if(real == NULL)
	{
		printf("Memory is failure\n");
		return 0;
	}
	printf("Enter the string line \n");
	scanf("%[^\n]",real->str);
	HF *result = (HF *)malloc(sizeof(HF));
	if(result == NULL)
	{
		printf("Memory is failure\n");
		free(real);
		return 0;
	}
	result = Highest_Freq_char(real);
	printf("Highest frequency character is %c -> %d times \n",result->name,result->big);	
	free(real);
//	free(result);
	real = NULL;
	result = NULL;
}
