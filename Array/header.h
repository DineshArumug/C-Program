#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#define Small 999999
#define max 5
enum type{
zero = 0,
one = 1,
two = 2,
three = 3,
};

typedef struct common_struct
{
	char str[100];
	int arr_int[max];
	int count;
	int sum;
	char letter;
}common;
extern int i;
common *sum(common *);
common *max_min_array(common *);
common *second_largest_number(common *);
common *number_negative_element(common *);
common *insert_array(common *);
common *delete_array(common *);
common *count_freq(common *);
common *duplicate_element(common *);
common *duplicate_delete(common *);
