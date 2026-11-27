#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    n+=10;
    n*=2;
    n-=5;
    printf("the final value of n is: %d\n",n);
    return 0;
}