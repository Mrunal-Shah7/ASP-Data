#include<stdio.h>
#include<string.h>

int main(){
int i,count=0;
char *str[4]={"madam","bhatia","abcd","xyz"};
//printf("%s",str[2]);
//char *tmp = str;
char *p[4];
char **q=p;
//char *tmp=p;
for(i=0;i<4;i++)
{
p[i]=str[i];
//printf("%u\n",p[i]);
}


for(i=0;i<4;i++){
printf("%s\n",*q);
q++;
}



/*
for(i=0;i<4;i++)
{
printf("%s\n",p[i]);
p++;
}
*/
}
