#include<stdio.h>

int main(int argc,char *argv[] )
{

int i;
int fact=1;
int temp=atoi(argv[1]);

while(temp!=1)
{

fact=fact*temp;
temp=temp-1;


}
printf("%d",fact);
/*int x = atoi(argv[1]) + atoi(argv[2]);
printf("%d",x);
*/

}            
