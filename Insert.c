#include"header.h"
struct LIST* Insert(struct LIST *head)
{
	struct LIST* new=NULL,*temp=NULL;
	new=(struct LIST*)calloc(1,sizeof(*new));
	printf("Enter name: ");
		__fpurge(stdin);
	new->name=Getstring();
	if(head==NULL)
		head=new;
	else
	{
		temp=head;
		while(temp->next!=NULL)
			temp=temp->next;
		temp->next=new;
	}
	return head;
}
