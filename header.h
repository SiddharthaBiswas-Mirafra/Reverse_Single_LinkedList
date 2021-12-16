#include<stdio.h>
#include<stdio_ext.h>
#include<stdlib.h>
#include<string.h>

/*.............Function & Structure Declaratio.........*/
struct LIST
{
	char *name;
	struct LIST* next;
};

void _Menu();
char *Getstring(void);
struct LIST* Insert(struct LIST*);
void Print(struct LIST*);
struct LIST* Free(struct LIST*);
struct LIST* Rev(struct LIST*);


