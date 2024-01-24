#include<stdio.h>
#include<string.h>
#include<unistd.h>


int main(){

char str[100],newstr[100],temp;
int length,i,len,j,k;

char a[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};



printf("Enter the string to be encrypted:");
scanf("%s",str);

length=strlen(str);
len=strlen(a);



for(i=0;i<length;i++){

	for(j=0;j<len;j++){

		if(str[i]==a[j]){
			
			temp=a[j+2];

				
				newstr[i]=temp;
														
  
			
						
		
				}
		
		
			   }




		     }	


		 	 




printf("%s\n",newstr);



}
