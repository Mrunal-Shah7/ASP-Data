#include<stdio.h>


int main(){

int a[100];
int input,search,i,j,loop,right,mid,temp;
int left=0;



//===========================================================================

//INPUT 
printf("How many elements do you want to enter:");
scanf("%d",&input);

for(loop=0;loop<input;loop++){

printf("Element number%d:",loop+1);
scanf("%d",&a[loop]);
                             }
                             

//===========================================================================

//SORTING

for(i=0;i<input;i++){

for(j=i+1;j<input;j++){

if(a[j]<a[i]){


temp=a[i];
a[i]=a[j];
a[j]=temp;

             }

		      }
		    }

		    
//===========================================================================		    

//DISPLAY SORTED LIST

for(i=0;i<input;i++){

printf("Index:%d Element:%d\n",i,a[i]);

		    }


                             
                             
        
//===========================================================================

//SEARCH

printf("\n");
printf("Enter the element to be searched:");
scanf("%d",&search);


     
//=========================================================================                   

//BINARY SEARCH

right=input-1;

while(1){

mid=(left+right)/2;


if(search<a[mid]){
right=mid-1;
                 }

else if(search>a[mid]){
left=mid+1;
  		      }



else if(search==a[mid]){

printf("The element is present at index:%d\n",mid);
break;
		       }


         }




}

