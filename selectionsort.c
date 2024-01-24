#include<stdio.h>

int main(){


int a[100];
int size,loop,i,j,temp,min;




//==========================================================================================================

//INPUT 

printf("How many elements do u want to enter:");
scanf("%d",&size);
printf("\n");

for(loop=0;loop<size;loop++){

printf("Index %d:",loop);
scanf("%d",&a[loop]);
		   	    }

printf("\n");

//==========================================================================================================

//SORTING


for(i=0;i<size-1;i++){

	min=i;
	
	for(j=i+1;j<size;j++){

		if(a[j]<a[min]){

			min=j;

			       }	


			     }
			     
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;


		     }




//==========================================================================================================

//PRINTING 



for(loop=0;loop<size;loop++){

printf("%d\n",a[loop]);

			     }




}










