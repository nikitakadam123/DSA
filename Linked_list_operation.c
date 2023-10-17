#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *add;
}*start,*curr;

void create(int);
void display();

int main(){
	int n,c,ch;
	start=NULL;
	do{
		printf("\n1- Create \n2- Display \n3- reverse \n4- search \n5- exit");
		printf("\nEnter your choice: ");
		scanf("%d",&c);
		switch(c)
		{
			case 1:  
			    printf("\n Enter element which u want to insert in link list- ");
			    scanf("%d",&n);
			    create(n);
			    display();
			    break;
			case 2:
				display();
				break;
			case 3:
				reverse();
				break;
			case 4:
				printf("Enter element which u want to search in linked list- ");
				scanf("%d",&n);
				search(n);
				break;
			case 5:
				printf("\n Thank you");
				break;
		}
	
	printf("\n Do you want to continue? then press 1: ");
	scanf("%d",&ch);	
	}while(ch==1);
	return 0;
}
void create(int n)
{
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
		printf("\n Linked list is empty.....");
	}
	else{
		curr=start;
		while(curr!=NULL)
		{
			printf("|%d| %u|----> ",curr->data,curr->add);
			curr=curr->add;

		}
	}
}

void reverse()
{
	struct Node *ptr1,*ptr2,*ptr3;
	ptr1=start;
	ptr2=ptr1->add;
	ptr3=ptr2->add;
	while(ptr3!=NULL)
	{
		ptr2->add=ptr1;
		ptr1=ptr2;
		ptr2=ptr3;
		ptr3=ptr3->add;
	}
	ptr2->add=ptr1;
	start->add=NULL;
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
		if(curr->data==n)
		{
			flag=1;
			break;
		}
		curr=curr->add;
	}
	if(flag==1)
	{
		printf("\n Node found");
	}
	else{
		printf("\n Sorry Node not found!!");
	}
}

