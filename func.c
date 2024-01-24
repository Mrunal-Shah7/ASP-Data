#include<stdio.h>
int fact(int);
void main(){
int n;
printf("Enter the value of n for finding factorial");
scanf("%d",&n);
printf("%d",fact(n));
}

int fact(int n)
{
int tmp;
if (n==1)
{
return 1;
}
else
{
tmp = n * fact(n-1);
return tmp;
}
}

