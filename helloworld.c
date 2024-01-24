#include<stdio.h>

int main()
{
int input;
int count=0;
char result[50];
char inter[50];



printf("Enter the number:");
scanf("%d",&input);



do{

if (input%2==0)
{
inter[count]='0';
count=count+1;
input=input/2;
}
else if(input%2==1)
{
inter[count]='1';
count=count+1;
input=input/2;
}
}while(input==0 or input==1)

printf("%s",inter);









}
