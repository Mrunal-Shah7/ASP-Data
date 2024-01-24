#include<stdio.h>


int main(int argc,char *argv[])
{
char data;

FILE *f1,*f2;


f1=fopen(argv[1],"r");


f2=fopen(argv[2],"r");


while(data!=EOF)
{
data=fgetc(f1);
putchar(data);
putc(data,f2);
}

fclose(f1);
fclose(f2);



}
