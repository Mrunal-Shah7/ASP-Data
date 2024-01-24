#include<stdio.h>

int main()
{

int input;
int a=1;

printf("Enter the number whose table has to be printed:");
scanf("%d",&input);


while(a<=10)
{

printf("%d x %d = %d \n",input,a,input*a);

a++;

} 


}
