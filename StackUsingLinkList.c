/**************************** Stack Using Linked List Using own data type ****************************************/

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}node;

#define M (node*) malloc(sizeof(node))

void main()
{
	node *top=NULL,*newnode,*temp;
	int choice,elt;
	do{
		printf("\n***MENU***");
		printf("\n1- Push \n2- Pop \n3- Dispaly \n4- exit");
		printf("\n Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\n ENter element to push ");
				scanf("%d",&elt);
				if(top==NULL)
				{
					top=M;
					top->data=elt;
					top->next=NULL;
				}
				else{
					newnode=M;
					newnode->data=elt;
					newnode->next=top;
					top=newnode;
			}
			printf("%d Pushed ",elt);
		    break;
		    case 2:
		    	if(top==NULL)
		    	{
		    		printf("\n Stack is empty");
				}
				else{
					elt=top->data;
					temp=top;
					top=top->next;
					free(temp);
					printf("%d Popped ",elt);
				}
			case 3:
				if(top==NULL)
				{
					printf("\n Stack is empty");
				}
				else{
					printf("\n Stack");
					for(temp=top;temp!=NULL;temp=temp->next)
					{
						printf("\n %d",temp->data);
					}
				}
				break;
				case 4:
					printf("Thank You");
					break;
				default:
					printf("Wrong Choice");
				}
		}while(choice!=4);
	}

