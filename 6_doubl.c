#include<stdio.h>
#include<stdlib.h>

struct node{
	struct node *prev;
	struct node *next;
	int data;
}

struct node *head;

void insertion_biginning();
void insertion_last();
void insertion_specified();
void deletion_beginning();
void deletion_last();
void deletion_specified();
void display();
void search();
void main()
{
	int choice=0;
	while(choice!=9)
	{
		printf("\n************Main Menu************\n");
		printf("\nChoose one option from the following list...\n");
		printf("\n=================================\n");
		printf("\n1.Insert at the beginning\n2.Insert at the last\n3.Insert at any random location\n4.Delete from beginning\n5.Delete from last\n6.Delete the node after the given data\n7.Search\n8.Show\n9.Exit\n");
		printf("\nEnter your choice:\n");
		scanf("\n%d", &choice);
		switch(choice)
		{
			case 1:
				insertion_beginning();
				break;
			case 2:
				insertion_last();
				break;
			case 3:
				insertion_specified();
				break;
			case 4:
				deletion_beginning();
				break;
			case 5:
				deletion_last();
				break;
			case 6:
				deletion_specified();
				break;
			case 7:
				search();
				break;
			case 8:
				display();
				break;
			case 9:
				exit(0);
			default:
				printf("Please enter a valid choice..");
	
		}
	}
}

void insertion_beginning(){
	struct node *ptr;
	int item;
	ptr=(struct node *)malloc(sizeof(struct node));
	if(ptr==NULL)
	{
		printf("\nOverflow");
	}
	else
	{
		printf("\nEnter item value:");
		scanf("%d", &item);
		if(head==NULL)
		{
			ptr->next=NULL;
			ptr->prev=NULL;
			ptr->data=item;
			head=ptr;
		}
		else{
			ptr->data=item;
			ptr->prev=NULL;
			ptr->next=head;
			head->prev=ptr;
			head=ptr;
		}
		printf("\nNode Inserted\n");
	}
}

void insertion_last()
{
	struct node *ptr, *temp;
	int item;
	ptr=(struct node *)malloc(sizeof(struct node));
	if(ptr==NULL)
	{
		printf("\nOverflow\n");	
	}
	else
	{
		printf("Enter the value:");
		scanf("%d", &item);
		ptr->data=item;
		if(head==NULL)
		{
			ptr->next=NULL;
			ptr->prev=NULL;
			head=ptr;
		}
		else
		{
			temp=head;
		}
	}
}
