#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *addr;
};

struct Node *top = NULL;

void push(int val)
{
    //create new node
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->addr = top;
    top = newNode;
}

void pop()
{
    struct Node *temp;

    if(top == NULL)
        printf("Stack is Empty\n");
    else
    {
        printf("Poped element = %d\n", top->data);

        temp = top;
        top = top->addr;
        free(temp);
    }
}


void display()
{
    struct Node *temp = top;
    while(top != NULL)
    {
         printf("%d->", temp->data);
         temp = temp->addr;
    }
    printf("NULL\n");
}

int main()
{
	int top=-1,val,choice,i;
	do{
		
		printf("\n\n********* MENU *******\n");
		printf("\n1: Push \n2: Display \n3: Pop \n0: Exit");
		printf("\n Enter your choice: ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:                         //push
				printf("\n Enter element do you want to push- ");
				scanf("%d",&val);
			     push(val);
			     
				break;
				case 2:                       //display
					display();
					break;
				case 3:                         //pop
					 pop();
					break;
				case 0:
					printf("Thank You");
					break;
				default:
					printf("\n Plzz enter correct choice: ");
		}
	}while(choice!=0);
	}


   

