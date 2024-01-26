//Write a C program to reverse an array using pointers.
#include<stdio.h>
void print_array(int *,int);
void reverse_array(int *,int);
int main(){
	int element,i;
	printf("Enter the array elements\n"),scanf("%d",&element);
	int array[element];
	printf("Enter the any %d number\n",element);
	for(i=0;i<element;i++){
		scanf("%d",&array[i]);
	}
	print_array(array,element);
	reverse_array(array,element);
	print_array(array,element);
}

void print_array(int *array,int element){
	int i;
	printf("Printing the Array element ");
	for(i=0;i<element;i++){
		printf("%d ",array[i]);
	}
	printf("\n");
}

void reverse_array(int *array,int element){
	int i,j,temp;
	for(i=0,j=element-1;i<j;i++,j--){
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
	}

}
