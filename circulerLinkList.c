#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *addr;
}*last,*curr;

int main()
{
	int n,ch,c,loc;
	last=NULL;
	do{
		printf("\n1-Create \n2-Display \n3-Insert first \n4-Insert Middle \n5-delete first");
		printf("\n Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter element which you want to insert ");
				scanf("%d",&n);
				create(n);
				display();
				break;
			case 2:
				display();
				break;
			case 3:
				printf("Which element do u want to inset at begging");
				scanf("%d",&n);
				insertFirst(n);
				display();
				break;
			case 4:
				deleteFirstNode();
				break;
				
				
		}
		printf("Do you want to continue? then press 1");
		scanf("%d",&c);
	}while(c==1);
}

void create(int n)
{
	struct Node *newnode;
	newnode=malloc(sizeof(struct Node));
	newnode->data=n;
	newnode->addr=NULL;
	
	if(last==NULL)
	{
		last=newnode;
		last->addr=last;
	}
	else{
		newnode->addr=last->addr;
		last->addr=newnode;
		last=newnode;
	}
	
}

void display()
{
	if(last==NULL)
	{
		printf("Link list is empty");
	}
	else{
		curr=last->addr;
		while(curr!=last)
		{
			printf("|%d|%u|--> ",curr->data,curr->addr);
			curr=curr->addr;
		}
		printf("|%d|%u|--> ",curr->data,curr->addr);
	}
}

void insertFirst(int n)
{
	struct Node *newnode;
	newnode=malloc(sizeof(struct Node));
	newnode->data=n;
	newnode->addr=last;
	last->addr=newnode;
	printf("\n New Node Inserted!!");
}

void deleteFirstNode()
{
	curr=last->addr;
	last->addr=curr->addr;
	curr->addr=NULL;
	free(curr);
	printf("\n Node Deleted");
}
