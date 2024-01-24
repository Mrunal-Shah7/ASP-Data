#include<stdio.h>
void main()
{

int i,n,fact;
int a=1;
char ch;
do{
printf("enter the number");
scanf("%d",&n);
fact=1;
for (i=1;i<=n;i=i+1)
{
fact = fact * i;


}

printf("%d",fact);
a++;
}while(a<10);
//return 0;
}

