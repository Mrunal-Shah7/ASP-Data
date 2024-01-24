#include<stdio.h>

union test{
int i;
char c[20];
float f;

}u1; 




void main()
{
union test u2;
int a= 5;
char c = 'a' - 32;
printf("%c",c);
printf("%d",sizeof(union test));
u1.i = 2;
printf("\n%d",sizeof(union test));






}
