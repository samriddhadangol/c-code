#include<stdio.h>
int main(){
    int a,b,c,temp;
    printf("enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    temp=a;
    a=b;
    b=c;
    c=temp;
    printf("after:%d %d %d\n",a,b,c);
    return 0;
}