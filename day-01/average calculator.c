#include<stdio.h>
int main(){
    int mark1,mark2,mark3;
    printf("Enter the marks:\n");
    scanf("%d%d%d",&mark1,&mark2,&mark3);//get input from the user
    printf("Average = %.2f",(float)(mark1+mark2+mark3)/3);//put %.2f (float) format specfier beacuse we get either decimal or integer value 
    
    
}
