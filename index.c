#include<stdio.h>
int main(){

int a[50];
int input,i,search;
int *p=a;

printf("Enter the number of entries:");
scanf("%d",&input);

for(i=0;i<input;i++)
{
printf("Entry no %d:",i+1);
scanf("%d",&a[i]);
}


printf("Enter the element to be searched:");
scanf("%d",&search);


for(i=0;i<input;i++)
{
if(search==*(p+i))
{
printf("The position of the element is %d in the list.",i+1);
}

}
























}







