#include<stdio.h>
#include<string.h>


int main(){

FILE *input,*output;
char name[100],str;
char add="1";



printf("Enter the name of the file to be encrypted:");
scanf("%s",name);

input=fopen(name,"r");
    

while(str!=EOF){


str=getc(input);

strcat(add,str);




	      }	
	   
               


}
