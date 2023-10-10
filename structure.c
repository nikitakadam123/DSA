#include<stdio.h>
#include<stdlib.h>

 struct Student 
    {
	int rollNo;
	char Name;
	int per;
    };
int main()
    {
	struct Student *stud;
    int c;

    while(1)
   {
	stud=malloc(sizeof(struct Student));
	printf("Enter Roll No: ");
	scanf("%d",&stud->rollNo);
	printf("Enter Student Name: ");
	scanf("%s",&stud->Name);
	printf("Enter Percentage: ");
	scanf("%d",&stud->per);
	
	
	printf("\n Roll number is %d: ",stud->rollNo);
	printf("\n Name of Sudent is %c: ",stud->Name);
	printf("\n Percentage of Student is %d: ",stud->per);
	
	printf("\nDo you Want to Continue press 1 otherwise press any key\n");
	scanf("%d",&c);
	
		if(c!=1)
		{
			printf("\n Roll number is %d: ",stud->rollNo);
	        printf("\n Name of Sudent is %c: ",stud->Name);
	        printf("\n Percentage of Student is %d: ",stud->per);
	        break;
	        
		}
		
    }
    printf("\n------------thank u-------------\n");
    
}
 
 

    
    
