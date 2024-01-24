#include<stdio.h>

int main(){

int choice,input,j;
int i=0;
int rem[100];


printf("Enter the number:");
scanf("%d",&input);
printf("1.Binary\n");
printf("2.Hexadecimal\n");
printf("3.Octal\n");
printf("Enter your choice:");
scanf("%d",&choice);

switch(choice){

case 1:
while(input>0){

rem[i]=input%2;

input=input/2;

i++;
}


for(j=i-1;j>=0;j--){

printf("%d",rem[j]);
}
printf("\n");
break;


case 2:

while(input>0){

rem[i]=input%16;

input=input/16;
i++;
}


for(j=i-1;j>=0;j--){

printf("%d",rem[j]);

}
printf("\n");
break;

case 3:

while(input>0){


rem[i]=input%8;

input=input/8;

i++;
}


for(j=i-1;j>=0;j--){

printf("%d",rem[j]);

}
printf("\n");
break;













}
}
