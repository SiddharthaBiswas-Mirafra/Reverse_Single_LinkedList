#include"header.h"
void Print(struct LIST* head)
{
	if(head==NULL)
	{
		puts("The list is empty.....");
		return;
	}
	puts("...........................................");
	while(head)
	{
		puts(head->name);
		head=head->next;
	}
	puts("...........................................");
	return;

}
