#include<stdio.h>
#include<malloc.h>
struct node *insert(struct node *,int);
void display(struct node *);




struct node{
int data;
struct node *next;
};


void main(){

struct node *first = NULL;
int i,n,val;

printf("Enter the number of elements:");
scanf("%d",&n);

printf("Enter numbers:");
for(i=0;i<n;i++)
{


scanf("%d",&val);
first=insert(first,val);

}
display(first);
}

struct node *insert(struct node *first,int val)
{

struct node *new;

new=(struct node *)malloc(sizeof(struct node));

new->data=val;
new->next=first;

return(new);
}


void display(struct node *first)
{
while(first!=NULL)
{
printf("%d",first->data);
first=first->next;
}
}
