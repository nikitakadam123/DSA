#include<stdio.h>

#define SIZE 5


int main()
{
	int n,c,ch,top=-1,stack[SIZE],i;
	do{

	printf("\n1: Push \n2: Pop \n3: Display \n4: Exit");
	printf("\n Enter your choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Enter any element do you want to insert in stack- ");
			scanf("%d",&n);
		    if(top == SIZE-1)
	        {
				printf("\n Stack is full");
			}
	        else
			{
			stack[++top]=n;
	     	printf("%d element pushed! ",n);
			printf("\n %d Succesfully Pushed!!",n);
		}
			break;
		case 2:
			if(top == -1)
	        {
		       printf("\n stack is empty");
	        }
	        else
			{
			printf("%d poped",stack[top]);
            stack[top]=0;
		    top--;
      		}
			printf("\n %d Poped",n);
			break;
		case 3:
			i=top;
	        printf("\nStack: ");
	        while(i!=-1)
        	{
	         	printf("\n%d",stack[i]);
		        i--;
	        }
		    break;
		case 4:
			printf("Exit");
	}
	
	printf("\n Do you want to continue? then press any key--- ");
	scanf("%d",&c);
   
   }while(c!=0);
   return 0;

}


