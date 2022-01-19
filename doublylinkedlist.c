#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *left,*right;
};
struct node *start=(struct node*)0;
void main()
{
void insert(int);
struct node* search(int);
void delete(int);
struct node *temp;
int c,a,b;
do
{
printf("1.insert\n");
printf("2.search\n");
printf("3.delete\n");
printf("4.exit\n");
printf("enter the choice..\n");
scanf("%d",&c)
;
switch(c)
{
	case 1:printf("enter a value to insert:\n");
		scanf("%d",&a);
		insert(a);
		break;
	case 2:printf("enter a value to search:\n");
		scanf("%d",&b);
		temp=search(b);
		if(temp==(struct node*)0)
		printf("not found..\n");
		else
		printf("found..\n");
		break;
	case 3:printf("enter a value to delete:\n");
		scanf("%d",&a);
		delete(a);
		break;
	case 4:printf("exiting...\n");
		exit(0); 
 }
}
while(1);
}
void insert(int x)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	if(start==(struct node*)0)
{
	newnode->left=(struct node*)0;
	start=newnode;
} 
else
{
	newnode->left=(struct node*)0;
	newnode->right=start;

	start->left=newnode;
	start=newnode;
}
}
struct node* search(int d)
{
	struct node *ptr;
	ptr=start;
	while(ptr!=(struct node*)0 && ptr->data!=d)
	{
		ptr=ptr->right;
	}
	return ptr;
}

void delete(int x)
	{
		struct node *t;
		t=search(x);
	if(t==0)
	{
	printf("no such element exists..\n");
	}
	else
	{
	if(t==start)
	if(t->right==(struct node*)0)
	{
		start=(struct node*)0;
	}
	else
	{

	t->right->left=(struct node*)0;
	start=t->right;
	}
	else if(t->right==(struct node*)0)
	{
	t->left->right=(struct node*)0;
	}
	else
	{
	t->left->right=t->right;
	t->right->left=t->left;
	}
	}
	free(t);
	}

