#include<stdio.h>
#include<string.h>

int main(){
int i,count=0;
char *str="madam";
char *p=str;


for(i=strlen(str)-1;i>=0;i--)
{
if(str[i]==*p)
{
count++;
}

else
{
printf("The string is not palindrome!");
break;
}
p++;
}

if(count==strlen(str))
{

printf("The string is a palindrome string.");

}


}
