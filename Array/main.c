#include"header.h"
int main()
{
common *real = (common *)malloc(sizeof(common));
common *result = (common *)malloc(sizeof(common));
/*
result = sum(real); //calling sum of all array
printf("Sum 0f all array = %d\n",result->sum);
*/
/*
result = max_min_array(real); // calling maximum and minimum element of array
printf("Maximum = %d Minimum = %d\n",result->sum,result->count);
*/
/*
result = second_largest_number(real); //calling second largest number of array element 
printf("Second largest number of an array = %d\n",result->sum);
*/
/*
result = number_negative_element(real); //calling number of negative element in array
printf("Negative numbers count = %d \n",result->count);
*/
/*
int i=0;
printf("Enter the array element\n");
for(i=zero;i<5;i++)
scanf("%d",&real->arr_int[i]);
result = insert_array(real);  //calling insert array element 
for(i=zero;i<5;i++)
	printf("%d ",result->arr_int[i]);
printf("\n");
*/
/*
int i;
printf("Enter the array element\n");
for(i=zero;i<5;i++)
	scanf("%d",&real->arr_int[i]);
result = delete_array(real);  //calling delete array element
for(i=zero;i<5;i++)
	printf("%d ",result->arr_int[i]);
printf("\n");
*/
/*
int i;
printf("Enter the array element\n");
for(i=zero;i<5;i++)
	scanf("%d",&real->arr_int[i]);
result = count_freq(real);  //calling count frequent number of array element
*/
/*
int i;
printf("Enter the array element\n");
for(i=zero;i<max;i++)
	scanf("%d",&real->arr_int[i]);
result = duplicate_element(real); //calling Duplicate Number Array element 
*/
int i;
printf("Enter the array element\n");
for(i=zero;i<max;i++)
	scanf("%d",&real->arr_int[i]);
result = duplicate_delete(real); //calling Delete all the Duplicate Array element 
for(i=zero;i<5;i++)
	printf("%d ",result->arr_int[i]);
printf("\n");

}

