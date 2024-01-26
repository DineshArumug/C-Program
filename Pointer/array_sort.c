//Write a C program to sort array using pointers.
#include<stdio.h>
void print_array(int *,int );
void sort_array(int *,int);
int main(){
	int element;
	printf("Enter the size of array\n");
	scanf("%d",&element);
	int array[element],i;
	printf("Enter the %d number \n",element);
	for(i=0;i<element;i++){
		scanf("%d",&array[i]);
	}
	printf("Array element = ");
	print_array(array,element);
	printf("Sort array = ");
	sort_array(array,element);
	print_array(array,element);
}
void print_array(int *ptr,int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d ",ptr[i]);
	}
	printf("\n");
}
void sort_array(int *ptr,int size){
	int i,j,k,temp;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++){
			if(ptr[i]>=ptr[j]){
				temp = ptr[j];
				ptr[j] = ptr[i];
				ptr[i] = temp;
			}
		}
	}
}

