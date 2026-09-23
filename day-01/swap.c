#include<stdio.h>
int main(){
    int temp,a,b;
 a=10,b=20;
    temp=a;//store the value of a in temp
    a=b;//the value of b goes to a
    b=temp;//by using assignment operator we value of temp goes to b
    printf("the value of a after swap= %d\n",a);
    printf("the value of b after swaor=%d",b);
}
