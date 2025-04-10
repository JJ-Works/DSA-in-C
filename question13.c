// Menu driven program to implement stack operation using array.


#include<stdio.h>
#include<conio.h>
#define N 5

int top = -1;
int stack[N];

void push(){
	int inputValue;
	printf("\nEnter the value You want to push: ");
	scanf("%d",&inputValue);
	
	if(top == N-1){
		printf("\nStack full(Stack Overflow).\n");
	}
	else{
		top++;
		stack[top]=inputValue;
		printf("\nSuccessfully Pushed in stack.\n");
	}
}

void pop(){
	 if(top == -1){
	 	printf("\nStack is empty.\n");
	 }
	 else{
	 	printf("\nPopped Successfully.\n");
	 	top--;
	 }
}

void peek(){
	if(top == -1){
		printf("\nStack is empty.\n");
	}
	else{
		printf("\n\t\t|\t%d\t| <-- Top of the stack\n",stack[top]);
		printf("\t\t>---------------<\n\n");
	}
}

void traverse(){
	if(top == -1){
		printf("\n\nStack is empty.\n");
	}
	else{
		for(int i=top;i>=0;i--){
			printf("\n\t\t|\t%d\t| <--- Index: %d.\n",stack[i],i);
			printf("\t\t>---------------<\n");
		}
	}
}



int main(){
	int choice;
    printf("\n\n\n\t\t\t#13 Program to implement Stack using Array.");
	for(int i = 0;i<10;i++){
	printf("\n\nEnter \n1. Push\n2. Pop\n3. Peek\n4. Traverse\n5. End Program\n\n\n>>");
	scanf("%d",&choice);
	
	switch (choice){
		case 1:
			push();
			break;
			
		case 2:
			pop();
			break;
			
		case 3:
			peek();
			break;

		case 4:
			traverse();
			break;
		case 5:
			getch();
			return 0;
	}

	}
	
}



