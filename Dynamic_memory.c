#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p;   //value of pointer veriable
	int sum=0;
	while(1)  //infinite loop
	{
		p=malloc(sizeof(int));     //for allocating unknown amount of memory
		printf("Enter any number and stop: ");
		scanf("%d",p);
		if(*p==0)
		{
			break;
		}
		sum=sum+*p;
		
	}
	printf("Sum of number: %d",sum);
	return 0;
}
