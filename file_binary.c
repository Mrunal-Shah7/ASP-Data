#include<stdio.h>

int main(){
FILE *ptr;
int i,output;
int store;

printf("Enter 5 integers to store :");

ptr=fopen("temp.dat","w+");

for(i=0;i<5;i++){

scanf("%d",&store);
putw(store,ptr);

		}
		
printf("\n");

rewind(ptr);

for(i=0;i<5;i++){

output=getw(ptr);
printf("%d\n",output);
		
		}













}
