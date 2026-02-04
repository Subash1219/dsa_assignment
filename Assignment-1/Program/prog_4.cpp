#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
	struct node *prev;
};

struct node *head = NULL; // Keeping the List empty initially
struct node *tail = NULL; 

void insert_node(int key, int value)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    
	if (head == NULL)
    {
    head = tail = newnode;
    newnode->next = NULL;
    newnode->prev = NULL;
    return;
    }
    
    struct node *temp = head;
    while (temp != NULL && temp->data != key)
    {
        temp = temp->next;
    }
    
    if (temp == NULL)
    {
        printf("Key not found, inserted at end.. \n");
        tail->next = newnode;
        newnode->prev = tail;
        newnode->next = NULL;
        tail = newnode;
        return;
    }

    newnode->next = temp->next;
    newnode->prev = temp;

    if (temp->next != NULL)
    {
	    temp->next->prev = newnode;
	}
    else{
        tail = newnode; 
    }
    temp->next = newnode;
}


void delete_node(int key)
{
    struct node *temp = head;

    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    while (temp != NULL && temp->data != key)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Given key not found\n");
        return;
    }
    // delete first node
    if (temp == head)
    {
        head = head->next;
        if (head != NULL)
            head->prev = NULL;
        else
            tail = NULL;
    }
    // delete last node
    else if (temp == tail)
    {
        tail = tail->prev;
        tail->next = NULL;
    }
    // delete middle node
    else
    {
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
    }

    free(temp);
}

void display()
{
	
	if(head == NULL)
	{
		printf("List is empty \n");
		return;
	}
	
	struct node *temp;
	temp=head;
	do{
		
		printf("%d->",temp->data);
		temp=temp->next;
		
	}while(temp!=NULL);
	
	printf("NULL \n");
}

int main()
{
	// insert_node(key,value)
	insert_node(1,2);
	insert_node(2,3);
	insert_node(3,4);
	insert_node(4,5);
	insert_node(6,7);
	//display
	display();
	// delete_node(key)
	delete_node(2);
	delete_node(6);
	//display
	display();
	
	return 0;
}












