/************************************************ Q using Array *************************************************/

#include<stdio.h>
#include<stdlib.h>
#define M 5

int que[M];
int front=0,rear=0;
void insert_Q(int);
int delete_Q();
void display_Q();

void main()
{
	int ch,data,c;
	do{
		printf("\nMENU");
		
		printf("\n 1- Insert \n 2- Delete \n3- Display \n4- exit");
		printf("\n Enter Your Choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\n Enter data: ");
				scanf("%d",&data);
				insert_Q(data);
			break;
			case 2:
				data=delete_Q();
				if(data!=-1)
				{
					printf("\n Popped element is %d ",data);
				}
				break;
			case 3:
				printf("\n List of no. in queue: ");
				display_Q();
			break;
			case 4:
				printf("\nThank u ");
			break;
			
		}
		printf("\n Do u want to continue? ");
		scanf("%d",&c);
		
	}while(c!=0);
	
}
void insert_Q(int data)
{
	if(rear==M)
	{
		printf("\n Queue full");
		return;
	}
	else{
		que[rear]=data;
		rear++;
	}
	
}
int delete_Q()
{
	int d;
	if(front==rear)
	{
		printf("\n quere is empty ");
		return -1;
	}
	else{
		d=que[front];
		front++;
		return d;
	}
}
void display_Q()
{
	int i;
	for(i=front;i<rear;i++)
	{
		printf("%d-- ", que[i]);
	}
}
