/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node *Insert_sort(struct node *(int));
struct node *Insert_end(struct node *start,int num);
void display(struct node *);

int main()
{
    int i,n,keys[20],num;
    struct node *start=NULL;
    printf("\n enter the number of elements to create ssl:");
    scanf("%d",&n);
    printf("\n enter the elements in sorted order:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&keys[i]);
        start=insert_end(start,keys[i]);
    }
    display(start);
    while(1)
    {
        printf("\n enter data to insert into the sorted sll(enter-1 to stop):");
        scanf("%d",&num);
        if(num!=-1)
        {
            start=insert_sort(start,num);
            printf("\n node inserted!");
            display(start);
        }
        else
        break;
    }
}
struct node*Insert_end(struct node*start,int num)
{
    struct node*ptr,*new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node--->data=num;
    new_node--->next=NULL;
    if(start==NULL)
    {
        start=new_node;
        return start;
    }
    ptr=start;
    while(ptr->next!=NULL)
    ptr=ptr->next;
    ptr->next=new_node;
    return start;
}
struct node* insert_sort(struct node *start,int num)
{
    struct node *ptr,*new_node;
    new_node=(struct node *)malloc(size of(struct node);
    new_node->data=num;
    ptr=start;
    while((ptr!=NULL)&&(ptr->data<num))
    {
        prev=ptr;
        ptr=ptr->next;
    }
    if(ptr==start)
    {
        new_node->next=ptr;
        start=new_node;
    }
    else
    {
        prev->next=new_node;
        new_node->next=ptr;
    }
    return start;
}
void display(struct node *start)
{
    struct node *ptr;
    if(start==NULL)
    {
        printf("\n list is empty");
        return;
    }
    printf("\n The contents of the list are:");
    while(ptr!=NULL)
    {
        printf("%d",ptr_data);
        ptr=ptr->next;
    }
}
struct node* insert_sort(struct node *start,int num)
{
    struct_node*prev,*cur,*new_node;
    new_node=(struct node*)malloc(size of(struct node));
    new_node->data=num;
    prev=start;
    cur=start;
    while(cur!=NULL&&cur->data<num)
    {
        prev=cur;
        cur=cur->next;
    }
    if(cur==start)
    {
        new_node->next=cur;
        return new_node;
    }
    else
    {
        new_node->(next)=cur;
        prev->(next=new_node);
        return start;
    }
}
