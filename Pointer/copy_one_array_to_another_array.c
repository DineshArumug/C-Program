//Write a C program to copy one array to another using pointers.
#include<stdio.h>
void copy_array(int *array1,int *array2,int element);
void print_array_element(int *array,int element);
int main(){
	int element,i;
	printf("Enter the array element \n"),scanf("%d",&element);
	int array1[element],array2[element];
	printf("Enter the array number %d\n",element);
	for(i=0;i<element;i++){
		scanf("%d",&array1[i]);
	}
	print_array_element(array1,element);
	copy_array(array1,array2,element);
	print_array_element(array2,element);
}
void print_array_element(int *array,int element){
	int i;
	printf("printing the array element\n");
	for(i=0;i<element;i++){
		printf("%d ",array[i]);
	}
	printf("\n");
}
void copy_array(int *array1,int *array2,int element){
	int i;
	for(i=0;i<element;i++){
		array2[i] = array1[i];
	}
}
