#include<stdio.h>
void main()
{


int i,a[10],max,avg;
int sum=0;
int count=0;
printf("Enter the 10 elements of the array:");

for(i=0;i<10;i++){

printf("a[%d]=",i);
scanf("%d",&a[i]);

}


max=a[0];

for(i=0;i<10;i++){
if(a[i]>max){
max=a[i];
}
sum=sum+a[i];

count=count+1;


}

printf("The maximum is:%d\n",max);

printf("The sum is:%d\n",sum);

printf("The avg is:%d\n",sum/count);








}
