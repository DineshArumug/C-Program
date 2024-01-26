//Write a C program to copy one string to another using pointers.
#include<stdio.h>
#include<string.h>
void string_copy(char *ptr1,char *ptr2);
int main()
{
	char string1[100],string2[100];
	printf("Enter the String\n");
	scanf(" %[^\n]",string1);
//	strcpy(string2,string1);
	string_copy(string1,string2);
	printf("string1 = %s,string = %s\n",string1,string2);
	strcpy(string1,"Dinesh");
	printf("String1 = %s, String2 = %s\n",string1,string2);
}
void string_copy(char *ptr1,char *ptr2){
	int i;
	for(i=0;ptr1[i];i++){
		ptr2[i] = ptr1[i];
	}
}

