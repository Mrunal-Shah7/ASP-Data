#include<stdio.h>

int main(){

int input,i,j;
int a[100];
int count=1;
int num;
a[0]=1;


printf("Enter the number:");
scanf("%d",&input);






for(i=2;i<=input/2;i++){

	if(input%i==0){

		a[count]=i;
		count++;
			
			
		    }

		       }
a[count]=input;
           






for(j=0;j<=count;j++){

	printf("%d ",a[j]);

		    
		    }



}

