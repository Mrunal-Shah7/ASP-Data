#include<stdio.h>


int main(){


int a[100];
int size,loop,i,j,temp;




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

//SORT 


for(i=1;i<size;i++){

	temp=a[i];
	j=i-1;		
	while(j>=0 && a[j]>temp){
		
		a[j+1]=a[j];
		j--;
				}
	a[j+1]=temp;
		   }

//==========================================================================================================

//PRINT



for(loop=0;loop<size;loop++){

printf("%d\n",a[loop]);

			    }




}

















