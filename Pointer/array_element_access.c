//Write a C program to input and print array elements using pointer
#include<stdio.h>
void print_array_element(int *,int);
int main()
{
	int elements,i;
	printf("Enter the array elements \n"),scanf("%d",&elements);
	int array[elements];
	printf("Enter the any %d array number \n",elements);
	for(i = 0;i<elements;i++){
		scanf("%d",&array[i]);
	}
	print_array_element(array,elements);
}
void print_array_element(int *array,int element){
	int i;
	printf("Print array elements = ");
	for(i=0;i<element;i++){
		printf(" %d",array[i]);
	}
	printf("\n");
}
