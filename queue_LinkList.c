/******************************************** Q usink Linked List **************************************************/

#include <stdio.h>
#include <stdlib.h>
//queue with linked list

struct Node
{
	int data;
	struct Node *addr;
}*front,*rear,*temp;
void push(int);
void pop();
void display();
int main() {
	
	int c,ch,n;
	front=NULL;
	rear=NULL;
	do
	{
		printf("\n1-Push\n2-Pop\n3-display");
		printf("\nEnter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter value");
				scanf("%d",&n);
				push(n);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
		}
		printf("\ndo you want to continue press 1");
		scanf("%d",&c);
	}while(c==1);
	printf("\n-------------THANK YOU----------------");
	return 0;
}

void push(int n)
{
	//newnode=malloc..
	struct Node *newnode;
	newnode=malloc(sizeof(struct Node));
	newnode->data=n;
	newnode->addr=NULL;
	if((front==NULL)&&(rear==NULL))	
	{
		front=rear=newnode;
	}
	else
	{
		rear->addr=newnode;
		rear=newnode;
	}
	printf("\npush...");
}
void pop()
{
	temp=front;
	front=front->addr;
	printf("pop %d",temp->data);
	
}
void display()
{
	temp=front;
	while(temp!=rear)
	{
		printf("%d ",temp->data);
		temp=temp->addr;
	}
	printf("%d",temp->data);
}
