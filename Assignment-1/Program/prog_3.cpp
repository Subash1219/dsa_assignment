#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
	struct node *prev;
};

struct node *head = NULL; // Keeping the List empty initially
struct node *tail = NULL; 

void insert_node(int value)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	if(head == NULL)
	{
		head=tail=newnode;
		newnode->next=NULL;
		newnode->prev=NULL;
		return;
	}
	tail->next=newnode;
	newnode->prev=tail;
	newnode->next=NULL;
	tail=newnode;
}

void delete_node()
{
	if(head == NULL)
	{
		printf("List is empty \n");
		return;
	}
	if(head == tail)
	{
		free(head);
		head=tail=NULL;
		return;
	}
	struct node *temp;
	temp=tail;
	tail=tail->prev;
	free(temp);
	tail->next=NULL;	
	
}
void display()
{
	if(head == NULL)
	{
		printf("List is empty \n");
		return;
	}
	struct node *temp;
	temp=tail;
	while(temp!=NULL){
		printf("%d->",temp->data);
		temp=temp->prev;
	}
	printf("NULL \n");
}

int main()
{
	display();
	insert_node(1);
	insert_node(2);
	insert_node(3);
	insert_node(4);
	insert_node(5);
	display();
	delete_node();
	delete_node();
	display();
	return 0;
}












