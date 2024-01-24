#include<stdio.h>
	



void main(){

FILE *pointer,*pointer2;
char name[20];
char data;

char name2[20];



printf("Enter the name of the file:");
scanf("%s",name);

printf("Enter the name of the new file:");
scanf("%s",name2);


pointer=fopen(name,"r");

pointer2=fopen(name2,"w");

while(data!=EOF)
{
data=fgetc(pointer);
putchar(data);
putc(data,pointer2);

}

fclose(pointer);
fclose(pointer2);

}
