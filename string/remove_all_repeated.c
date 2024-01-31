//Write a C program to remove all repeated characters from a given string
#include"header.h"
#define String_lenght(str) strlen(str)
typedef struct count_occurrence
{
	char str[100];
	int count;
}CO;
void occurrence_count(CO *);
int main()
{
	CO *real = (CO *)malloc(sizeof(CO));
	printf("Enter the any string for count occurrence\n");
	scanf("%[^\n]",real->str);
	printf("String name %s\n",real->str);
	occurrence_count(real);
}
void occurrence_count(CO *value)
{
	int i,j,k,l;
	for(i=zero;value->str[i];i++)
	{
		value->count = 0;
		for(j=zero;value->str[j];j++)
		{
			if(value->str[i]==value->str[j])
				break;
		}
		if(i==j)
		{
			for(k=zero;value->str[k];k++)
			{
				if(value->str[i] == value->str[k])
					value->count++;		
			}
			if(value->count != 1)
			{
				for(l=i;value->str[l];l++)
					value->str[l] = value->str[l+1];

				--i;
			}

		}
	}
	printf("String = %s\n",value->str);
}
