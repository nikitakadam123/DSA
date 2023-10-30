#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *right, *left;
}*root,*p,*q;

struct node *make(int y)//void create(int n){mmalo....}
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=y;
	newnode->right=newnode->left=NULL;
	return(newnode);
}
void left(struct node *r,int x)//p 40
{
	if(r->left!=NULL)//NULL!=NULL
		printf("\n Invalid !");
	else
		r->left=make(x);
}
void right(struct node *r,int x)
{
	if(r->right!=NULL)
		printf("\n Invalid !");
	else
		r->right=make(x);
}
void inorder(struct node *r)
{
	if(r!=NULL)
	{
		inorder(r->left);
		printf("\t %d",r->data);//root
		inorder(r->right);
	}
}

void preorder(struct node *r)
{
	if(r!=NULL)
	{
		printf("\t %d",r->data);//root
		preorder(r->left);
		preorder(r->right);
	}
}

void postorder(struct node *r)
{
	if(r!=NULL)
	{
		postorder(r->left);
		postorder(r->right);
		printf("\t %d",r->data);//root
	}
}
void create()
{
	int no;
	char choice='y';
	printf("\nEnter the root:");
	scanf("%d",&no);//41  
	root=make(no);
//	p=root;
	while(choice=='y'||choice=='Y')
	{
		printf("\nEnter number or enter -1 to stop");
		scanf("%d",&no); //40  45  41
		if(no==-1)
			break;
		p=root;
		q=root;
		while(no!=p->data && q!=NULL)
		{
			p=q;
			if(no<p->data)//41<40
				q=p->left;
			else
				q=p->right;
		}
		if(no<p->data)//42<40
		{
			printf("Left branch of %d is %d\n",p->data,no);
			left(p,no);
		}
		else
		{
			right(p,no);
			printf("Right Branch of %d is %d\n",p->data,no);
		}
		printf("\t\t\t\t\t\t\t\tContinue ? ");
		scanf(" %c",&choice);
	}

}
void main()
{
	int no,action;

	while(1)
	{
		printf("\n\n1) Create\n");
		printf("2) Inorder Traversal\n");
		printf("3) Preorder Traversal\n");
		printf("4) Postorder Traversal\n");
		printf("5) Exit\n");
		printf("Enter choice : ");
		scanf("%d",&action);
		switch(action)
		{
			case 1:
				create();
			break;
			case 2:
				printf("\n\nInorder Traversal is \n\t\t\t");
				inorder(root);
			break;
			case 3:
				printf("\n\nPreorder Traversal is \n\t\t\t");
				preorder(root);
			break;
			case 4:
				printf("\n\nPostorder Traversal is \n\t\t\t");
				postorder(root);
			break;
			case 5:
				//exit();
			break;
		}
		getch();
	}
}
