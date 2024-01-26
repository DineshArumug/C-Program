//Write a C program to count total number of vowels and consonants in a string.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct vowel
{
	char str1[30];
	int vowel;
	int consonants;
};
struct vowel *count_vowel(struct vowel *);
int main()
{
	struct vowel *object1 = (struct vowel *)malloc(2*sizeof(struct vowel *));
	printf("Enter the any string for checking total number of vowels and consonants\n");
	scanf("%[^\n]",object1->str1);
	struct vowel *object2 = count_vowel(object1);
	printf("No.of vowel = %d\nNo.of consonants = %d\n",object2->vowel,object2->consonants);
	free(object1);
}
struct vowel *count_vowel(struct vowel *object3)
{
//	object3 = (struct vowel *)malloc(2*sizeof(struct vowel *));
	printf("Fun Count Vowel\n");
	object3->vowel = object3->consonants = 0;
	int i = 0;
	for(i=0;object3->str1[i];i++)
	{
		if((object3->str1[i] =='a') || (object3->str1[i] == 'e') || (object3->str1[i] == 'i') || (object3->str1[i] == 'o') || (object3->str1[i] == 'u'))
			object3->vowel++;
		else if((object3->str1[i] =='A') || (object3->str1[i] == 'E') || (object3->str1[i] == 'I') || (object3->str1[i] == 'O') || (object3->str1[i] == 'U'))
			object3->vowel++;
		
		else
			object3->consonants++;
	}
	return object3;
}

