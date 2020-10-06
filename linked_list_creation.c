#include<stdio.h>
#include<malloc.h>

int main()
{	
	struct node
	{
		int data;
		struct node *p;
	};
	typedef struct node node;
	
	node *new, *start, *loc = 0;
	int choice = 1;
	start = 0;
	
	while(choice == 1)
	{
		new = (node*)malloc(sizeof(node));
		printf("Enter the data to be enterd:");
		scanf("%d", &new->data);
		if(start != 0)
		{
			loc->p = new;
			loc = new;
		}
		else
		{
			start = loc = new;
		}
		fflush(stdin);
		printf("\n\nDo you want to enter more nodes:\n");
		printf("Enter 1 for Yes and 0 for No.\n");
		scanf("%d", &choice);
	}
	
	loc->p = 0;
	loc = start;
	printf("The linked list is:\n");
	while(loc != NULL)
	{
		printf("%d ", loc->data);
	
	
		loc = loc-> p;
	}
	printf("\n\n");
	return 0;
}


