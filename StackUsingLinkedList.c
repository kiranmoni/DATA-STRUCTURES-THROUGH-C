#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void peek();
void display();
struct node
{
	int element;
	struct node *next;
}*head;
void main()
{
	int choice;
	printf("-------------Stack Using LinkedList------------");
	do
	{
		printf("\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
		printf("\nEnter your choice\t");
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
			default: printf("\nYou have entered the wrong choice");			
		}		
	}while(1);	
}
void push()
{
	int value;
	struct node *ptr = (struct node*)malloc(sizeof(struct node));
	if(ptr==NULL)
	{
		printf("\nMemory insufficient");
	}
	else
	{
		printf("\nEnter the Value\t");
		scanf("%d",&value);
		if(head==NULL)
		{
			ptr->element=value;
			ptr->next=NULL;
			head=ptr;
		}
		else
		{
			ptr->element=value;
			ptr->next=head;
			head=ptr;
		}
		printf("\nElement is inserted in to the stack");
	}
}
void pop()
{
	int value;
	struct node *ptr;
	if(head==NULL)
	{
		printf("\nStack is UnderFlow");
	}
	else
	{
		value=head->element;
		ptr=head;
		head=head->next;
		free(ptr);
		printf("\n%d is poped from the stack \t: ",value);
	}
}
void peek()
{
	struct node *ptr;
	ptr=head;
	if(ptr==NULL)
	{
		printf("Stack is UnderFlow");
	}
	else
	{
		printf("The top of the Stack is %d",ptr->element);
	}
}
void display()
{
	struct node *ptr;
	ptr=head;
	if(ptr==NULL)
	{
		printf("Stack is UnderFlow");
	}
	else
	{
		printf("The elements in Stack are :");
		while(ptr!=NULL)
		{
			printf("\t %d",ptr->element);
			ptr=ptr->next;
		}
	}
}