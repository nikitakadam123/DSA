#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *addr;
}*start,*curr;

void create(int);
void display();

int main()
{
	int n,c,ch,loc;
	start=NULL;
	do{
		printf("\n1- Create \n2- Display \n3- Insert First Node \n4- Insert Middel Node \n5- Delete first node \n6- Delete Middle Node \n7-Reverse list \n8- Search Node");
		printf("\n Enter Your Choice: ");
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
				printf("\nEnter new value to insert at first location in linked list ");
				scanf("\n%d",&n);
				insertFirstNode(n);
				break;
			case 4:
				printf("\n Enter the new value which u want to insert in middel of linked list: ");
				scanf("%d",&n);
				printf("\n Enter the location where u want to add element: ");
				scanf("%d",&loc);
				insertMiddelNode(n,loc);
				break;
			case 5: 
			    deleteFirstNode();
			    break;
			case 6:
				printf("\nEnter location to delete node ");
				scanf("%d",&loc);
				deleteMiddleNode(loc);
				break;
			case 7:
				reverse();
				break;
			case 8:
				printf("Enter element which u want to search in linked list- ");
				scanf("%d",&n);
				search(n);
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
	newnode = malloc(sizeof(struct Node));
	newnode->data=n;
	newnode->addr=NULL;
	if(start==NULL)
	{
		start=newnode;
	}
	else
	{
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
		printf("Linked list is empty....");
	}
	else{
		curr=start;
		while(curr!=NULL)
		{
			printf("|%d|%u|----> ",curr->data,curr->addr);
			curr=curr->addr;
		}
	}
}
void insertFirstNode(int n)
{
	struct Node *newnode;
	newnode=malloc(sizeof(struct Node));
	newnode->data=n;
	newnode->addr=start;
	start=newnode;
}
void insertMiddelNode(int n,int loc)
{
	struct Node *newnode;
	int cnt;
	newnode=malloc(sizeof(struct Node));
	newnode->data=n;
	curr=start;
	cnt=1;
	while(cnt<loc-1)
	{
		curr=curr->addr;
		cnt++;
	}
	newnode->addr=curr->addr;
	curr->addr=newnode;
	printf("Node Inserted...");
}

void deleteFirstNode()
{
	curr=start;
	start=start->addr;
	curr->addr=NULL;
	free(curr);
	printf("first node is deleted...");
}
void deleteMiddleNode(int loc)
{
	int cnt;
	struct Node *next;
	curr=start;
	cnt=1;
	while(cnt<loc-1)
	{
		curr=curr->addr;
		cnt++;
	}
	printf("enterd loction node is deleted...");
}

void reverse()
{
	struct Node *ptr1,*ptr2,*ptr3;
	ptr1=start;
	ptr2=ptr1->addr;
	ptr3=ptr2->addr;
	while(ptr3!=NULL)
	{
		ptr2->addr=ptr1;
		ptr1=ptr2;
		ptr2=ptr3;
		ptr3=ptr3->addr;
	}
	ptr2->addr=ptr1;
	start->addr=NULL;
	start=ptr2;
	printf("\nLinked list is reverse...");
	printf("\n For checking the output plzz call display function for that..... press 2");
	
}
void search(int n)
{
	int flag=0;
	curr=start;
	while(curr!=NULL)
	{
		if(curr->data=n)
		{
			flag=1;
			break;
		}
		curr=curr->addr;
	}
	if(flag==1)
	{
		printf("\n Node found");
	}
	else{
		printf("\n Sorry Node not found!!");
	}
}

