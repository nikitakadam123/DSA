#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *add;
}*start,*curr;

void create(int);
void display();

int main()
{
	int n,ch;
	start=NULL;
	
	do{
		printf("\nEnter data element: ");
		scanf("%d",&n);
		create(n);
		display();
		printf("\nDo you want to continue? then press 1 \n");
		scanf("%d",&ch);
	}while(ch==1);
}

void create(int n){
	struct Node *newnode;
	newnode=malloc(sizeof(struct Node));
	newnode->data=n;
	newnode->add=NULL;
	if(start==NULL)
	{
		start=newnode;
	}
	else{
		curr=start;
		while(curr->add!=NULL)
		{
			curr=curr->add;
		}
		curr->add=newnode;
	}
	
}

void display()
{
	if(start==NULL)
	{
		printf("\n Linked List is Empty\n");
	}
	else{
		curr=start;
		while(curr!=NULL)
		{
			printf("|%d|%u|---> ",curr->data,curr->add);
			curr=curr->add;

		}
	}
	
}
