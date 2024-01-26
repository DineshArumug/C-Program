//Write a C program to check whether a number is palindrome or not using recursion.
#include<stdio.h>
int palindrome(int value);
int main(){
	int number;
	printf("Enter the any number \n"),scanf("%d",&number);
	int check = palindrome(number);
	if(check == number)
		printf("Palindrome\n");
	else
		printf("Not Palindrome\n");
}
int palindrome(int value){
	static int reverse = 0;
	if(value != 0){
		reverse = reverse*10 + value%10;
		return palindrome(value/10);
	}
	return reverse;
}
