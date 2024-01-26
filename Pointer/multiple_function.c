#include<stdio.h>
void function_multiple(int *ptr1,int *ptr2);
int main(){
	int swap1,swap2;
	printf("Enter the number\n");
	scanf("%d%d",&swap1,&swap2);
	function_multiple(&swap1,&swap2);
	printf("%d %d",swap1,swap2);
}
void function_multiple(int *ptr1,int *ptr2){
	int temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}
