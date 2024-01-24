#include<stdio.h>



void main(){

int input,i,j;




printf("How many levels do you require for the pyramid:");
scanf("%d",&input);



for(i=1;i<=input;i++){

	for(j=1;j<=i;j++){
	
	
		printf("%d",i);

			 }
	printf("\n");

		     }

/*
for(i=input;i>=1;i--){

	for(j=i;j>=1;j--){

		printf("%d",i);
			
			 }
	printf("\n");

		     }
*/

}
