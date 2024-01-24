#include<stdio.h>


void print(int n){


if(n==1||n==0){printf("%d\n",n);
//return 1;
}

else{
printf("%d\n",n);
print(n-1);
}

}

void main(){
int input;

printf("Enter the input:");
scanf("%d",&input);

print(input);

}
