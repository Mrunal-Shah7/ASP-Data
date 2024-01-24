#include<stdio.h>

int main()
{

int input,i,j;



printf("Enter the maximum number of stars:");
scanf("%d",&input);



for(i=input;i>=1;i--)
{
for(j=i;j>=1;j--)
{
printf("*");
}
printf("\n");
}

}

