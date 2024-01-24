#include<stdio.h>

int main(){

int length,i,j,search,num1,num2;

int a[100];


//==================================================
//INPUT

printf("Enter the number of elements:");
scanf("%d",&length);


for(i=0;i<length;i++){

	printf("Index no %d:",i);
	scanf("%d",&a[i]);

		     } 


//==================================================
//SEARCHING

printf("\n");
printf("Enter the element to be matched:");
scanf("%d",&search);



for(i=0;i<length;i++){

	for(j=i+1;j<length;j++){



		if(a[i]+a[j]==search){

			printf("The indices are:%d and %d\n",i,j);

				     }	

				}

		      } 

}
