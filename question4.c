//Program to find the multiplication of natural number using Recursion.

#include<stdio.h>
#include<conio.h>

void multiplication(int value,int count){
	if(count == 11){
		printf("\n\n");
		getch();

		return;
	}
	else{
		printf("\n\t\t%d X %d = %d",value,count,value*count);
		
		multiplication(value,count+1);
	}
}

int main(){
	int input;
	printf("\n\t\t\t#4 Program to find the multipication of natural number using Recursion.");
	
	printf("\n\n\n\tEnter a natural number: ");
	scanf("%d",&input);
	
	multiplication(input,1);
}
