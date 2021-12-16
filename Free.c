#include"header.h"
struct LIST* Free(struct LIST* head)
{
	struct LIST* temp;
	if(head==NULL)
	{
		puts("The list is empty.....");
		return head;
	}
	while(head)
	{
		temp=head;
		head=head->next;
		free(temp);
	}
	return head;

}
