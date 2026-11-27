#include<stdio.h>
int main(){
    int a,b;
    printf("enter two numbers: ");
    scanf("%d %d",&a,&b);
    if(a==0 && b==0){
        printf("1");
    }else{
        printf("0");
    }
    return 0;
}