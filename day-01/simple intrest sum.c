//simple interest problem
#include<stdio.h>
int main(){
    int principal,rate,time;
    printf("Enter principal,rate and time:\n ");
    scanf("%d%d%d",&principal,&rate,&time);//get input from the user,scanf used to store the value in the addresss
    printf("Simple interest=%d",(principal*rate*time)/100);
}
