#include<stdio.h>
#include<stdlib.h>

struct student{
	int rollNo;
	char Name[20];
	int sub1,sub2,sub3;
	int total;
	float per;
}*start,*curr;

int main()
{
	int c;
	start=NULL;
	while(1)
	{
		void create();
		void display();
		printf("\n Do you wnat to add next sutuent? then press 1: ");
		scanf("%d",&c);
		if(c!=1)
		{
			break;
		}
	}
	return 0;
}

void create()
{
	struct student *studnode;
	studnode=malloc(sizeof(struct node));
	newnode->add=NULL;
	
	printf("\n Enter Student Roll Number: ");
	scanf("%d",&studnode->rollNo);
	printf("\n Enter Student Name: ");
	scanf("%s",&studnode->Name);
	printf("\n Enter 1st subject mark: ");
	scanf("%d",&studnode->sub1);
	printf("\n Enter 2nd subject mark: ");
	scanf("%d",&studnode->sub2);
	printf("\n Enter 3rd subject mark: ");
	scanf("%d",&studnode->sub3);
	
	studenode->total=studnode->sub1+studnode->sub2+studnode->sub3;
	studnode->per=studnode->total/3;
	
	if(start==NULL)
	{
		start=studnode;
	}
	else{
		curr=start;
		while(curr->add!=NULL)
		{
			curr=curr->add;
		}
		curr->add=studnode;
	}
}

void display()
{
	if(start==NULL)
	{
		printf("Linked List is Empty");
	}
	else{
		curr=start;
		while(curr!=NULL)
		{
			printf("\nRoll Number is: ",curr->rollNo);
			printf("\nName of Student is: ",curr->Name);
			printf("\nSubject 1st marks is: ",curr->sub1);
			printf("\nSubject 2nd marks is: ",curr->sub2);
			printf("\nStudent 3rd marks is: ",curr->sub3);
			printf("\n Total is: ",curr->total);
			printf("\n Percentage is: ",curr->per);
			curr=curr->add;

		}
	}
}
