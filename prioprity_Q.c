// Write a Program in C to Perform “Insert” and “Delete” on Priority Queue
#include<stdio.h>
#include<stdlib.h>

void insert(int num,int prio);
void display();
void del();

struct node
{
	int priority;
	int data;
	struct node *addr_next;
}*front = NULL,*tmp,*q,*ptr;

void main()
{
	char choice='y';
	int action,n,prio;
	
	while(1)
	{
		printf("1) Insert\n");
		printf("2) Delete\n");
		printf("3) Display\n");
		printf("4) Exit\n");

		printf("Enter your choice : ");
		scanf("%d",&action);
		
		switch(action)
		{
		case 1:
			choice='y';
			
			while(choice=='y'||choice=='Y')
			{
				printf("\nEnter a number  and Priority :  ");
				scanf("%d %d",&n,&prio);//(40 4) (20 6) (30 2)
				insert(n,prio);
				printf("\n");
				display();
				printf("\t\t\t\t\t\t\t\tContinue ? ");
				scanf(" %c",&choice);
			}
			getch();
		break;
		
		case 2:
			choice='y';
			while(choice=='y'||choice=='Y')
			{
				del();
				printf("\n");
				display();
			printf("\t\t\t\t\t\t\t\tContinue ? ");
			scanf(" %c",&choice);
			}
			getch();
		break;
		
		case 3:
			display();
		break;
		case 4:
			//exit();
		break;
		}
	}
}

//               40 5
void insert(int num,int prio)//45  3
{
	tmp=malloc(sizeof(struct node));
	tmp->data=num;
	tmp->priority=prio;
                   //
	if(front==NULL||prio<front->priority) //5<2  add first node
	//check queue is empty or item to be 
	//added has priority more than first one
	{
		tmp->addr_next=front;
		front=tmp;	
	}		
	else
	{
		q=front;
		//null!=null
		while(q->addr_next!=NULL&&q->addr_next->priority<=prio)//6<5
		{
			q=q->addr_next;
		}
		tmp->addr_next = q->addr_next;
		q->addr_next = tmp;
	}
}

void display()
{
	ptr = front;
	if(front == NULL)
	{
		printf("Queue is empty\n");
	}
	else
	{
		printf("Data \t Priority\n");
		while(ptr != NULL)
		{
			printf("%d \t %d\n",ptr->data,ptr->priority);
			ptr=ptr->addr_next;
		}
	}
}
void del()
{
	if(front == NULL)
	{
		printf("Queue is empty\n");
	}
	else
	{
		tmp=front;
		front = front->addr_next;
		free(tmp);
	}
}
