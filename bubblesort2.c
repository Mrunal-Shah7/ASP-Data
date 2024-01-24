#include<stdio.h>


int main(){

int a[50],count,i,j,temp,loop,k;


//==============================================================
//INPUT


printf("Enter the number of elements that you want to enter:");
scanf("%d",&count);


for(loop=0;loop<count;loop++){

	printf("Index number %d:",loop);
	scanf("%d",&a[loop]);

		    }

//==============================================================
//SORTING



for(i=0;i<count;i++){

	for(j=i+1;j<count;j++){
	
	
		if(a[i]>a[j]){


			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			
			     }	
			     
			    } 
			    
			  }
			  
//==============================================================
//Printing the sorted list

for(k=0;k<count;k++){

	printf("%d\n",a[k]);

		    }	










}










			     
			     
