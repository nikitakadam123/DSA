#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *addr;
}*start,*curr;

int main()
{
	int n,ch,c,start=NULL;
	do{
		printf("\n1: create \n2:display \n0:exit");
		printf("\n Enter your Choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter Element: ");
				scanf("%d",&n);
				create(n);
				printf("\n Element inserted!!!!");
				break;
			case 2:
				printf("\n Stack is: ");
				display();
				break;
			case 3:
				printf("Exit");
		}
		printf("\n Do you want to continue? press correct option");
		scanf("%d",&c);
    }while(c!=0);
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
		printf("Linked list is empty");
	}
	else{
		curr=start;
		while(curr!=NULL)
		{
			printf("|%d |%u |---> ",curr->data,curr->addr);
	        curr=curr->addr;

		}
	}
}
