//Write a C program to compare two strings using pointers.
#include<stdio.h>
#include<string.h>
int string_compare(char *,char *);
int main(){
	char string1[100],string2[100];
	printf("Enter the two string for comparing both string\n");
	scanf(" %[^\n] %[^\n]",string1,string2);
	int compare_status = string_compare(string1,string2);//strcmp(string1,string2);
	if(!compare_status){
		printf("Both the string are same\n");
	}
	else
		printf("Both the string are not matching\n");
}
int string_compare(char *ptr1,char *ptr2)
{
	int i,j,k,count = 0;
	for(i=0;ptr1[i];i++);
	for(j=0;ptr2[j];j++);
	for(k=0;(k<i)||(k<j);k++){
		if(ptr1[k]!=ptr2[k])
			count++;
	}
	return count;
}
