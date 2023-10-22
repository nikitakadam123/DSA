#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *addr;
};
struct Node *top=NULL;
int  main()
{
int top=-1,data,addr,ch;

	printf("\n1: Push \n2: Pop \n3: Display \n0: exit");
	printf("ENTER YOUR CHOICE: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
           struct Node *newNode = malloc(sizeof(struct Node));
		
			newnode->data=n;
			newnode->addr=NULL;
			top=newnode;
			break;
		case 2:
			struct Node *temp;
			if(top==NULL)
			{
				printf("\nStack is empty");
			}
			else{
				printf("Element poped",top->data);
				temp=top;
				top=top->addr;
				free(temp);
			}
			break;
		case 3:
			   struct Node *temp = top;
    while(top != NULL)
    {
         printf("%d->", temp->data);
         temp = temp->addr;
    }
    printf("NULL\n");
	}
}
