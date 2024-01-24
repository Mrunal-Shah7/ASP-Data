#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){

int input,choice,choice2,rem,k;
int i=0;
int j=0;
int sum=0;
int rem2[100];



printf("1.Binary Input\n");
printf("2.Decimal Input\n");
printf("Hexadecimal Input\n");
printf("Octal Input\n");
printf("Enter your choice:");
scanf("%d",&choice);


switch(choice){

case 1:

printf("Enter Number:");
scanf("%d",&input);
printf("1.Decimal Conversion");
printf("2.Octal Conversion");
printf("3.Hexadecimal Conversion");
printf("Enter choice:");
scanf("%d",&choice2);

switch(choice2){

case 1:
while(input>0){
rem=input%10;
sum=sum+rem*pow(2,i);
input=input/10;
i++;
}
printf("%d",sum);
break;

case 2:
while(input>0){
rem=input%10;
sum=sum+rem*pow(2,i);
input=input/10;
i++;
}

while(sum>0){
rem2[j]=sum%8;
sum=sum/8;
j++;
}

for(k=j-1;k>=0;k--){
printf("%d",rem2[k]);
}
printf("\n");

break;

case 3:


while(input>0){
rem=input%10;
sum=sum+rem*pow(2,i);
input=input/10;
i++;
}

while(sum>0){
rem2[j]=sum%16;
sum=sum/16;
j++;
}

for(k=j-1;k>=0;k--){
printf("%d",rem2[k]);
}
printf("\n");

break;
}
























}


























































































}
