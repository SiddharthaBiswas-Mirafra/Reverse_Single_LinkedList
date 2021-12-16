#include"header.h"
struct LIST* Rev(struct LIST* head)
{
	if(head==NULL)
	{
		puts("The list is empty.....");
		return head;
	}
	struct LIST *P=NULL,*C=head,*N=NULL;
	while(C)
	{
		P=C;
		C=C->next;
		P->next=N;
		N=P;
	}
	return P;


}
