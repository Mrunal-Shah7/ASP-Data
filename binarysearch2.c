#include<stdio.h>

int main(){

int count,a[50],i,j,k,temp,search,right,mid;

int left=0;

int flag=0;


//===============================================================
//INPUT

printf("How many elements do you want to enter:");
scanf("%d",&count);
printf("\n");



for(i=0;i<count;i++){

	printf("Index no %d:",i);
	scanf("%d",&a[i]);
	
		    }



//===============================================================
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


//===============================================================
//PRINTING THE SORTED LIST


for(k=0;k<count;k++){


	printf("%d\n",a[k]);
	
	printf("\n");

			}

//===============================================================
//SEARCH INPUT 


printf("Enter the element to be searched:");
scanf("%d",&search);


//===============================================================
//BINARY SEARCH

right=count-1;

while(left<=right){

	mid=(left+right)/2;


	if(search<a[mid]){

		right=mid-1;

			 }

	else if(search>a[mid]){

		left=mid+1;

			      }


	else if(search==a[mid]){

		printf("The searched element is present in the list at position %d\n",mid);
		break;
		flag=1;
			       }
	
	
	}
	
	if(flag==0){printf("The element is not present in the list\n");}	
	
	
}
