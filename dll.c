#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *addr_next;
	struct Node *addr_prev;
}*start,*curr,*prev;


int main()
{
	int ch,c,n,loc;
	do{
		printf("\n1:Create \n2:Display \n3:Insert first \n4:Insert Middel \n5:Delete first \n6:Delete middle \n6:exit");
		printf("Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
	        case 1:
				printf("\nEnter any element to insert in linked list");
				scanf("%d",&n);
				create(n);
				display();
				break;
			case 2: 
			    display();
			    break;
			
			case 3:
				printf("\nEnter new value to insert at first location in double linked list ");
				scanf("%d",&n);
				insertFirstNode(n);
				break;
		case 4:
				printf("\n Enter the new value which u want to insert in middel of double linked list: ");
				scanf("%d",&n);
				printf("\n Enter the location where u want to add element in double linklist: ");
				scanf("%d",&loc);
				insertMiddelNode(n,loc);
				break;
			case 5: 
			    deleteFirstNode();
			    break;
			case 6:
				printf("Enter location to delete node ");
				scanf("%d",&loc);
				deleteMiddelNode(loc);
				break;
		}
	
		printf("\nDo you want to add next node in linked list press 1 ");
		scanf("%d",&c);
}while(c==1);
return 0;
	
}

void create(int n)
   {
	struct Node *newnode;
	newnode=malloc(sizeof(struct Node));
	newnode->data=n;
	newnode->addr_next=NULL;
	newnode->addr_prev=NULL;
	if(start==NULL)
	{
		start=newnode;
	}
    else
	{
	curr=start;
	while(curr->addr_next!=NULL)
	{
		curr=curr->addr_next;
	}
	curr->addr_next=newnode;
	newnode->addr_prev=curr;
  }
}

void display()
{
	if(start==NULL)
	{
		printf("Linkm list is empty.....");
	}
	else{
		curr=start;
		while(curr!=NULL)
		{
			printf("|%u|%d|%u|-->",curr->addr_prev,curr->data,curr->addr_next);
			curr=curr->addr_next;
		}
	}
}
void insertFirstNode(int n)
{
	struct Node *newnode;
	newnode=malloc(sizeof(struct Node));
	newnode->data=n;
	newnode->addr_next=start;
	newnode->addr_prev=NULL;
	newnode->addr_prev=newnode;
	start=newnode;
	prinrf("\n New node inserted at first location");
}

void insertMiddelNode(int n,int loc)
{
	int cnt;
	cnt=1;
	struct Node *newnode;
	curr=start;
	while(cnt<loc-1)
	{
		prev=curr;
		curr=curr->addr_next;
		cnt++;
	}
	newnode=malloc(sizeof(struct Node));
	newnode->data=n;
	newnode->addr_next=curr;
	curr->addr_prev=newnode;
	newnode->addr_prev=prev;
	prev->addr_next=newnode;
}
void deleteFirstNode()
{
	curr=start;
	start=start->addr_next;
	start->addr_prev=NULL;
	free(curr);
}
void deleteMiddelNode(int loc)
{
	int cnt;
	struct Node *next;
	cnt=1;
	prev=NULL;
	curr=start;
	while(cnt<loc)
	{
		prev=curr;
		curr=curr->addr_next;
		cnt++;
	}
	next=curr->addr_next;
	prev->addr_next=next;
	next->addr_prev=prev;
	free(curr);
}

