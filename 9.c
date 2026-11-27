#include<stdio.h>
int main(){
    int year ,n;
    printf("enter year: ");
    scanf("%d",&year);
    n=year%100;
    printf("last two digits of year: %02d",n);
    return 0;
}