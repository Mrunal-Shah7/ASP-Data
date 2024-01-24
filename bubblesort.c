#include<stdio.h>


int main(){

int a[100];
int input;
int loop,i,j;
int count=0;
int temp;
int flag=0;


printf("How many elements do you want to enter:");
scanf("%d",&input);

for(loop=0;loop<input;loop++){

printf("Element number%d:",loop+1);
scanf("%d",&a[loop]);
count++;

                             }





for(i=0;i<count-1;i++){

for(j=0;j<count-i-1;j++)
	{
	   
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
flag=1;
}
	

	
	   for(int k=0;k<count;k++){
		      printf("%d",a[k]);
	     	    }
	     	    printf("\t");
	    
	    
	    
	    	    
	     }
	     printf("Value of flag:%d",flag);
	     if(flag==0)
	     break;
	     	
printf("\n");
		      }
		      
		    
		  
		  
//printf("\t");

                    }



         


