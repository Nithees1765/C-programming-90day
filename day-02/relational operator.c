#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter the values of a,b,c,d\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("%d\n",a>b);
    printf("%d\n",b>c);
    printf("%d\n",c>d);
    printf("%d",(a!=c)*(d!=b));
}
