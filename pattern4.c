#include<stdio.h>

int main()
{

int input,i,j;



printf("Enter the maximum number of stars:");
scanf("%d",&input);



for(i=1;i<=input;i++)
{
for(j=1;j<=i;j++)
{
printf("%d",i);
}
printf("\n");
}

}


