/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/** Queue implementation using SLL */
#include<stdio.h>
#include<stdlib.h>
// Node creation
struct node
{
int info;
struct node *link;
};
typedef struct node *NODE;
// Insert node at the rear end
NODE insertRear(NODE first)
{
NODE temp,cur;
int item;
temp = (NODE)malloc(sizeof(struct node));
if(temp==NULL)
{
printf("\n Unable to allocate memory...\n");
return first;
}
printf("\nEnter an element to be inserted: ");
scanf("%d", &item);
temp->info = item;
temp->link = NULL;
if(first == NULL)
first=temp;
else
{
cur=first;
while(cur->link!=NULL)
cur=cur->link;
cur->link=temp;
}
return first;
}
// Delete node from the front end
NODE deleteFront(NODE first)
{
NODE temp;
if(first==NULL)
{
printf("\nThe list is empty.. no elements to delete...\n");
return first;
}
temp=first;
first = first->link;
printf("\nElement being deleted is : %d\n", temp->info);
free(temp);
return first;
}
// Display the contents of the linked list
void display(NODE first)
{
NODE cur;
if(first == NULL)
printf("\nList is empty, no elements to display\n");
else
{
cur=first;
printf("\nElements in the linked list are : ");
while(cur!=NULL)
{
printf("%d\t",cur->info);
cur=cur->link;
}
}
}
void main()
{
NODE first = NULL;
int choice;
printf("\n********* Queue implementation using SLL *********\n");
while(1)
{
printf("\n1. Insert\n2. Delete\n 3. Display\n4. Exit\n");
printf("\n---------------\n");
printf("\nEnter your choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1: first = insertRear(first);
break;
case 2: first = deleteFront(first);
break;
case 3: display(first);
break;
case 4: printf("\n Program exits now...\n");
exit(0);
default: printf("\nInvalid choice... Please enter valid choice...\n");
}
}
}
