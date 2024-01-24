#include<stdio.h>

int main(){
int input[100];
int i=0;
int digit,j,k;
char convert[100][100];



printf("Enter the number of digits of the number:");
scanf("%d",&digit);
printf("\n");

for(i=0;i<digit;i++){

printf("%dst entry:",i+1);
scanf("%d",&input[i]);

}

for(j=0;j<digit;j++){

if(input[j]==1){
convert[j][100]='one';
}

else if(input[j]==2){
convert[j][100]='two';
}

else if(input[j]==3){
convert[j][100]='three';
}

else if(input[j]==4){
convert[j][100]='four';
}

else if(input[j]==5){
convert[j][100]='five';
}

else if(input[j]==6){
convert[j][100]='six';
}


else if(input[j]==7){
convert[j][100]='seven';
}

else if(input[j]==8){
convert[j][100]='eight';
}

else if(input[j]==9){
convert[j][100]='nine';
}

else if(input[j]==10){
convert[j][100]='ten';
}


}
printf("\n");


for(k=0;k<input;k++){
printf("%s",convert[k]);
}













}
