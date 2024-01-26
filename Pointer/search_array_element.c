//Write a C program to search an element in array using pointers.
#include<stdio.h>
int search_array_element(int *,int,int);
int main()
{
	int element,i;
	printf("Enter the size of the array\n"),scanf("%d",&element);
	int array[element],search_element;
	printf("Enter the %d number\n",element);
	for(i=0;i<element;i++){
		scanf("%d",&array[i]);
	}
	printf("Enter the element to search\n");
	scanf("%d",&search_element);
	int result = search_array_element(array,element,search_element);
	if(result)
		printf("Array element is found at index = %d \n",result-1);
	else 
		printf("Array element is not found in index\n");
}
int search_array_element(int *array,int element,int search_element){
	int i;
	for(i=0;i<element;i++){
		if(array[i]==search_element)
			return i+1;
		else 
			continue;
	}
	return 0;
}
