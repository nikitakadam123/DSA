#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct node *addr;
}*start,*curr;

void create(int);
void diplay();

int main()
{
	int n,ch;
	start=NULL;
	do{
		printf("\nEnter any data element which u want to insert in linked list: ");
        scanf("%d",&n);
	    create(n);
	    display();
        printf("\nDo u want to continue? then press 1: ");
	    scanf("%d",&ch);
	}while(ch==1);
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
		printf("\nLinked list is Empty");
	}
	else{
		curr=start;
		while(curr!=NULL)
		{
			printf("|%d|%u|---> ",curr->data,curr->addr);
			curr=curr->addr;
		}
	}
}

