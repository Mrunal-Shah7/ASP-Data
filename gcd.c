#include<stdio.h>
int gcd(int,int);

int main(){

int a1;
int a2;
int ans;

printf("Enter the 1st number:");
scanf("%d",&a1);
printf("\n");
printf("Enter the 2st number:");
scanf("%d",&a2);
ans=gcd(a1,a2);
printf("The greatest common divisor is:%d",ans);
printf("\n");
}




int gcd(int a1,int a2){

int q,r;

if(a1>a2){

do{
q=a1/a2;
r=a1%a2;
a1=a2;
a2=r;
}while(r!=0);
return a1;
}

else
{
do{
q=a2/a1;
r=a2%a1;
a2=a1;
a1=r;
}while(r!=0);
return a2;
}
}

