//swap without using temp variable
#include<stdio.h>
int main(){
    int a=10,b=20;
    a=a+b;//30
    b=a-b;//10
    a=a-b;//20
    printf("the value of a after swap = %d\n",a);
    printf("the value of b after swap = %d",b);
}
