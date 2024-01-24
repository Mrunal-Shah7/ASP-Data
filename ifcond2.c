#include<stdio.h>
int main()
{

int a,b,c;


printf("Enter the value of a,b and c:\n");

scanf("%d %d %d",&a,&b,&c);

if (a>b && a>c)

{
printf("%d is greater than %d and %d\n",a,b,c);
}

else if (b>c && b>a)
{
printf("%d is greater than %d and %d\n",b,a,c);
}

else 
{
printf("%d is greater than %d and %d\n",c,b,a);
}




}
