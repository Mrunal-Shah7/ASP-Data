#include<stdio.h>
#include<string.h>

int main(){

char str[100],temp;
int length,i;


    printf("Enter the string:");
    fgets(str,100,stdin);

    length= strlen(str);

    for(i=0;i<length;i++){

        if(str[i]==' '){

            temp=str[i];
            str[i]=str[i+1];
            str[i+1]=temp;

                       }

                          }

    printf("%s",str);

          }
