#include<stdio.h>
#include<unistd.h>
#include<string.h>


int main(){

char str[100],str2[100],newstr[100],newstr2[100],temp,temp2;
int length,length2,len,len2,i,j,k,l,op=1;

char a[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};


while(op!=3){

	printf("=====================================================\n");
	printf("\t\t1.Encrypt\n");
	printf("\t\t2.Decrypt\n");
	printf("\t\t3.Exit\n");
	printf("-->");
	scanf("%d",&op);
	
	switch(op){
	
	
	case 1:
	
	printf("Enter the string to be encrypted:");
	scanf("%s",str);
	
	length=strlen(str);
	len=strlen(a);
	
	
	for(i=0;i<length;i++){
	
		for(j=0;j<len;j++){
		
			if(str[i]==a[j]){
	
		
				temp=a[j+2];
				newstr[i]=temp;
	
					}
	
				  }
				  
			     }

	printf("Encrypted string: %s\n",newstr);
	sleep(3);
	
	break;
	
	case 2:
	
	printf("Enter the string to be decrypted:");
	scanf("%s",str2);
	
	length2=strlen(str2);
	len2=strlen(a);
	
	for(k=0;k<length2;k++){
	
		for(l=0;l<len2;l++){
	
			if(str2[k]==a[l]){
	
				temp2=a[l-2];
				newstr2[k]=temp2;
				
	
					 }
	
				   }
	
	
			       }
			       
	printf("Decrypted string: %s\n",newstr2);
	sleep(3);

	
	break;


	
	}
	
	}
	
	}
	
	
	
	
	
	
	
