#include<stdio.h>
#include<stdlib.h>
#define max 20
int main()
{
	int i,j,pass,temp,n;
	int arr[max];
	
	printf("\nHow many element do u want in array? ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(pass=1;pass<n;pass++)
	{
		for(j=0;j<n-pass;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
		printf("\n -------- Pass %d -----------\n",pass);
		for(i=0;i<n;i++)
		{
			printf("%5d",arr[i]);
		}
		pass++;
	}
	printf("\nBubble sort \n");

	for(i=0;i<n;i++)
	{
		printf("%5d",arr[i]);
	}
	return 0;
}
