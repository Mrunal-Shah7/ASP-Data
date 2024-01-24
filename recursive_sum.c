#include<stdio.h>

int sum(int n){


int total=0;

if(n==1){
return 1;
}
else{
total=n+sum(n-1);
return total;
}
}
void main(){
int n;

printf("Enter the number upto which sum has to be found:");
scanf("%d",&n);

printf("The sum is:%d",sum(n));

}

