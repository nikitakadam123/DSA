/******************************************** Stack Using Array*************************************/

#include<stdio.h>
#define SIZE 5

int main()
{
	int stack[SIZE],top=-1,eletop,choice,i;
	do{
		printf("\n\n\n********* MENU *******\n");
		printf("\n1: push \n2: Pop \n3: Display \n0: Exit");
		printf("\n Enter your choice: ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:                         //push
				printf("\n Enter element do you want to push- ");
				scanf("%d",&eletop);
				if(top==SIZE-1)
				{
					printf("\nStack is full");
				}
				else{
					stack[++top]=eletop;
					printf("\n%d Pushed",eletop);
				}
				break;
				case 2:                       //pop
					if(top==-1)
					{
						printf("\nSatck is empty");
					}
					else{
						printf("\n%d Popped",stack[top]);
						stack[top]=0;
						top--;
					}
					break;
				case 3:                         //display
					i=top;
					printf("\nStack");
					while(i!=-1)
					{
						printf("\n%d",stack[i]);
						i--;
					}
					break;
				case 0:
					printf("Thank You");
					break;
				default:
					printf("\n Plzz enter correct choice: ");
		}
	}while(choice!=0);
	return 0;
}

