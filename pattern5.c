#include<stdio.h>

int main()
{

int input,i,j,k;



printf("Enter the maximum number of stars:");
scanf("%d",&input);



for(i=0;i<=input;i++)
{
j=i+1;


for(k=j;k<=i+j;k++){
printf("%d",k);
}

printf("\n");

}

}




