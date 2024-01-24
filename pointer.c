#include<stdio.h>
void change (int []);
int main(){

int *p;
int arr[10]={1,2,31,4,5,7,88,89,99};
int i;
p=arr;
change(arr);

for(i=0;i<10;i++)
printf("%d\n",*(arr+i));
//p=&arr[0];
//printf("%u",p);



}
void change(int a[])
{
*a=-99;

}

