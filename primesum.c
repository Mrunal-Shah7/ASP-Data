#include<stdio.h>

int main(){

int input,i,j;
int count=0;
int sum=0;


printf("Enter the number:");
scanf("%d",&input);


for(i=2;i<=input;i++){

for(j=2;j<i;j++){

if(i%j!=0){
count=count+1;
}

	
}
//printf("%d %d",count,i);
if(count==i-2){
sum=sum+i;
//printf("%d\t",sum);
}

count=0;
}

printf("The sum is:%d",sum);

}
