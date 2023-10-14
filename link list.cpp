#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *addr;
}*start,*curr;

void create(int);
void display();

int main()
{
	int n,c;
	start=NULL;
	do{
		printf("\n Enter any value to insert in linked list ");
		scanf("\n %d",&n);
		
		create(n);
		display();
		
		printf("\nDo You want to add next node then press 1 ");
		scanf("%d",&c);
	}while(c==1);
	return 0;
}

void create(int n)
{
	struct Node *newnode;
	newnode=malloc(sizeof(struct Node));
	newnode->data=n;
	newnode->addr=NULL;
	
	if(start==NULL)
	{
		start=newnode;
	}
	else{
		curr=start;
		while(curr->addr!=NULL)
		{
			curr=curr->addr;
		}
		curr->addr=newnode;
	}
}
void display()
{
	if(start==NULL)
	{
		printf("\nLinked list is Empty.......\n");
	}
	else{
		curr=start;
		while(curr!=NULL)
		{
			printf("\n |%d| %u| ----->",curr->data,curr->addr);
			curr = curr->addr;
		}
	}
}
