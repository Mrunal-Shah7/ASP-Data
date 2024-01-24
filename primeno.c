#include<stdio.h>

int main()
{

int flag=0,a,i,input;
int cnt=0;
printf("Enter the number :");

scanf("%d",&input);

for(a=2;a<=input;a++)
{

for(i=2;i<a/2;i++)
{

	if (a%i == 0)
	{
	flag=1;

	break;
	}


}

if (flag==1){

flag=0;}
else{
printf("%d\n",a);
flag=0;
}
}

}





