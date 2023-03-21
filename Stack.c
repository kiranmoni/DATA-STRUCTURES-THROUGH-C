#include<stdio.h>
#include<stdlib.h>
#define MAX 100
void push();
void pop();
void peek();
void display();
int isStackFull();
int isStackEmpty();
int stack[MAX], top=-1, n=0, choice=0,i;
void main()
{
	printf("Enter the size of the Stack : \t");
	scanf("%d",&n);
	do
	{
		printf("\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
		printf("Enter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: peek();
					break;
			case 4: display();
					break;
			case 5: exit(1);
			default: printf("You have entered the wrong choice");			
		}		
	}while(1);	
}
int isStackFull()
{
	if(top==n-1)
		return 1;
	else 
		return 0;
}
int isStackEmpty()
{
	if(top==-1)
		return 1; 
	else 
		return 0;
}
void push()
{
	int element;
	if(isStackFull())
		printf("\n Stack is Full\n");
	else
	{
		printf("Enter the element into the Stack: \t");
		scanf("%d",&element);
		top++;
		stack[top]=element;
		printf(" \nThe element Entered into the Stack is %d \n",stack[top]);
	}
}
void pop()
{
	if(isStackEmpty())
	{
		printf("Stack is Empty");
	}
	else
	{
		top=top-1;
		printf("The Element is popped from the Stack");
	}
}
void peek()
{
	if(isStackEmpty())
	{
		printf("The Stack is Empty");
	}
	else
	{
		printf("The top of the stack is %d \n", stack[top]);
	}
}
void display()
{
	if(isStackEmpty())
	{
		printf("Stack is Empty");
	}
	else
	{
		printf("\nStack Contains: ");
		for(i=top;i>=0;i--)
		{
			printf("\t%d\t",stack[i]);
		}
	}
}

