//Write a C program to access two dimensional array using pointers.
#include<stdio.h>
int col,row,i,j;
void print_2D_array(int (*array)[col]){
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
}
int main(){
	printf("Enter the row and column for the array\n"),scanf("%d%d",&col,&row);
	int array[row][col];
	printf("Enter the %d number \n",row*col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&array[i][j]);
		}
	}
	print_2D_array(array);
}
