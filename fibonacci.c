#include<stdio.h>

int main()
{
int input,i,c;
int a=0;
int b=1;

printf("Enter the number:");
scanf("%d",&input);



for(i=1;i<=input;i++)
{
printf("%d\n",a);
c=a+b;
a=b;
b=c;

}




}
